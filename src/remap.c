/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remap.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 14:53:24 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/22 14:53:25 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "figure.h"

char			**ft_newmap(char **map, int area)
{
	int		i;
	int		j;

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

char			**ft_clean(char **map, int area)
{
	int		a;

	a = 0;
	while (a < area - 1)
	{
		free(map[a]);
		map[a++] = NULL;
	}
	free(map);
	a = 0;
	map = ft_newmap(map, area);
	return (map);
}

void			ft_remove(char **map, t_conf *current)
{
	int		i;
	int		j;
	int		block;

	i = 0;
	block = 4;
	while (map[i] != NULL && block != 0)
	{
		j = 0;
		while (map[i][j] != '\0' && block != 0)
		{
			if (map[i][j] == current->letter)
			{
				map[i][j] = '.';
				block--;
			}
			j++;
		}
		i++;
	}
}
