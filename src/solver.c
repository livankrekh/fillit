/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 14:57:44 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/22 14:57:46 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "figure.h"
#define STOP 30000000

int		ft_include_fig(char **map, t_conf *fig, int i, int j)
{
	int size;

	size = 0;
	while (map[0][size] != '\0')
		size++;
	if ((i + fig->d[0] > size - 1 || j + fig->d[1] > size - 1))
		return (0);
	else if (map[i + fig->a[0]][j + fig->a[1]] == '.' &&
			map[i + fig->b[0]][j + fig->b[1]] == '.' &&
			map[i + fig->c[0]][j + fig->c[1]] == '.' &&
			map[i + fig->d[0]][j + fig->d[1]] == '.')
	{
		map[i + fig->a[0]][j + fig->a[1]] = fig->letter;
		map[i + fig->b[0]][j + fig->b[1]] = fig->letter;
		map[i + fig->c[0]][j + fig->c[1]] = fig->letter;
		map[i + fig->d[0]][j + fig->d[1]] = fig->letter;
		return (1);
	}
	else
		return (0);
}

int		ft_find(char **map, t_conf *current, int i, int j)
{
	if (current == NULL)
	{
		ft_matrixprint(map);
		exit(1);
	}
	*(current->ptr) += 1;
	while (ft_include_fig(map, current, i, j) == 0)
	{
		j++;
		if (map[i][j] == '\0')
		{
			j = 0;
			i++;
		}
		if (map[i] == NULL)
			return (0);
	}
	return (1);
}

int		ft_try(char **map, t_conf *current, int i, int j)
{
	if (ft_find(map, current, i, j) == 0)
		return (0);
	while (ft_try(map, current->next, 0, 0) == 0)
	{
		ft_remove(map, current);
		j++;
		while (ft_include_fig(map, current, i, j) == 0)
		{
			j++;
			if (map[i][j] == '\0')
			{
				j = 0;
				i++;
			}
			if (*(current->ptr) > STOP || map[i] == NULL)
				return (0);
		}
	}
	return (1);
}

int		ft_solver(t_conf *first, char **map)
{
	int		area;
	int		i;
	int		j;
	int		cn;
	t_conf	*tmp;

	area = 0;
	i = 0;
	j = 0;
	cn = 0;
	tmp = first;
	while (tmp)
	{
		tmp->ptr = &cn;
		tmp = tmp->next;
	}
	while (map[0][area] != '\0')
		area++;
	while (ft_try(map, first, 0, 0) == 0)
		map = ft_clean(map, area++);
	exit(1);
}
