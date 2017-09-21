/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 14:03:53 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/05 18:39:53 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_convertstr(const char *str, int i, int step)
{
	int sum;

	sum = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	i--;
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = sum + ((str[i] - 48) * step);
		step = step * 10;
		i--;
	}
	return (sum);
}

int				ft_atoi(const char *str)
{
	int i;
	int step;

	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\v')
		i++;
	if ((str[i] != '-' && str[i] != '+') &&
		(str[i] < '0' || str[i] > '9'))
		return (0);
	if (str[i] == '-')
	{
		step = (-1);
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
		step = 1;
	}
	else
		step = 1;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	return (ft_convertstr(str, i, step));
}
