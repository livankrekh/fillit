/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validator.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 14:51:20 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/22 14:51:21 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "figure.h"

void	ft_checkblock(char *str)
{
	int		i;
	int		dot;
	int		sharp;
	int		newln;

	i = 0;
	dot = 0;
	sharp = 0;
	newln = 0;
	while (i < 20)
	{
		if ((i == 4 || i == 9 || i == 14 || i == 19) &&
			str[i] != '\n')
			ft_exit('e');
		if (str[i] == '.')
			dot++;
		if (str[i] == '#')
			sharp++;
		if (str[i] == '\n')
			newln++;
		i++;
	}
	if (dot % 12 != 0 || sharp % 4 != 0 || newln % 4 != 0)
		ft_exit('e');
}

void	ft_checkfigure(char *str)
{
	int block;
	int i;

	block = 0;
	i = 0;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			if ((i + 1) < 20 && str[i + 1] == '#')
				block++;
			if ((i - 1) >= 0 && str[i - 1] == '#')
				block++;
			if ((i + 5) < 20 && str[i + 5] == '#')
				block++;
			if ((i - 5) >= 0 && str[i - 5] == '#')
				block++;
		}
		i++;
	}
	if (!(block == 6 || block == 8))
		ft_exit('e');
}

void	ft_checkstr(char *file)
{
	char	*str;
	int		i;
	int		fd;

	i = 0;
	str = (char*)malloc(sizeof(char) * 600);
	if ((fd = open(file, O_RDONLY)) == 0)
		ft_exit('e');
	read(fd, str, 599);
	if (ft_strlen(str) == 0 || ft_strlen(str) > 546)
		ft_exit('e');
	while (str[i] != '\0')
	{
		ft_checkblock(&str[i]);
		ft_checkfigure(&str[i]);
		i = i + 20;
		if (str[i] == '\n' && (str[i + 1] == '.' || str[i + 1] == '#'))
			i++;
		else if (str[i] != '\0')
			ft_exit('e');
	}
	close(fd);
	free(str);
	str = NULL;
}
