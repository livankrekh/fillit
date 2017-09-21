/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creatmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 14:50:49 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/22 14:51:02 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "figure.h"

int		ft_maparea(char *str)
{
	int		sharps;
	int		sq;

	sq = 2;
	sharps = 0;
	while (*str != '\0')
	{
		if (*str == '#')
			sharps++;
		str++;
	}
	while (sq * sq < sharps)
		sq++;
	return (sq);
}

char	**ft_createmap(char *str, char **map)
{
	int		area;
	int		i;
	int		j;

	area = ft_maparea(str);
	i = 0;
	if ((map = (char**)malloc(sizeof(char*) * area + 1)) == NULL)
		ft_exit('e');
	map[area] = NULL;
	while (i < area)
	{
		if ((map[i] = (char*)malloc(sizeof(char) * area + 1)) == NULL)
			ft_exit('e');
		map[i++][area] = '\0';
	}
	i = 0;
	while (i < area)
	{
		j = 0;
		while (j < area)
			map[i][j++] = '.';
		i++;
	}
	return (map);
}

void	ft_map(t_conf *fig, char *file)
{
	char	*str;
	int		fd;
	char	**map;

	map = NULL;
	if ((fd = open(file, O_RDONLY)) == 0)
		ft_exit('e');
	str = (char*)malloc(sizeof(char) * 600);
	read(fd, str, 599);
	map = ft_createmap(str, map);
	close(fd);
	free(str);
	str = NULL;
	ft_solver(fig, map);
}
