/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 14:06:51 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/05 18:15:37 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '*')
			ft_putchar(str[i]);
		i++;
	}
}

void		ft_putnbr(int n)
{
	char	nb[12];
	int		i;
	int		swich;
	int		n_c;

	n_c = n;
	swich = 1;
	if (n < 0)
		swich = -1;
	i = 0;
	while (i < 11)
		nb[i++] = '*';
	if (n < 0)
		nb[0] = '-';
	nb[i--] = '\0';
	while (n != 0)
	{
		nb[i--] = (((n % 10) * (swich)) + 48);
		n = n / 10;
	}
	(n_c == 0) ? ft_putchar('0') : ft_print(&nb[0]);
}
