/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_include.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 14:51:10 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/22 14:51:12 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "figure.h"

void	ft_input(int i, int j, int order, t_conf *fig)
{
	if (order == 0)
	{
		fig->a[0] = i;
		fig->a[1] = j;
	}
	else if (order == 1)
	{
		fig->b[0] = i;
		fig->b[1] = j;
	}
	else if (order == 2)
	{
		fig->c[0] = i;
		fig->c[1] = j;
	}
	else if (order == 3)
	{
		fig->d[0] = i;
		fig->d[1] = j;
	}
}

void	ft_coords(t_conf *fig)
{
	int		i;
	int		j;
	int		order;

	i = 0;
	order = 0;
	while (fig->tetrimin[i] != NULL)
	{
		j = 0;
		while (fig->tetrimin[i][j] != '\0')
		{
			if (fig->tetrimin[i][j] == '#')
			{
				ft_input(i, j, order, fig);
				order++;
			}
			j++;
		}
		i++;
	}
}

void	ft_change(char **fig, int c, t_conf *figure)
{
	int		i;
	int		j;

	i = 0;
	ft_coords(figure);
	while (fig[i] != NULL)
	{
		j = 0;
		while (fig[i][j] != '\0')
		{
			if (fig[i][j] == '#')
				fig[i][j] = c;
			j++;
		}
		i++;
	}
}

void	ft_include(char **figure, int len1, int len2, int index)
{
	int i;

	i = 0;
	figure[index] = (char*)malloc(sizeof(char) * (len1 + len2) + 1);
	while (i < len1)
	{
		figure[index][i] = '.';
		i++;
	}
	while (i < len1 + len2)
	{
		figure[index][i] = '#';
		i++;
	}
	figure[index][i] = '\0';
}

int		ft_with(char **matrix, int len1)
{
	int		x;

	x = 0;
	while (x < 3)
	{
		if (matrix[0][x] == '.' && matrix[1][x] == '.' &&
			matrix[2][x] == '.' && matrix[3][x] == '.')
		{
			x++;
			len1--;
		}
		else
			return (len1);
	}
	return (len1);
}
