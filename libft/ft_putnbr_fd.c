/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 16:49:20 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/05 18:12:59 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '*')
			ft_putchar_fd(str[i], fd);
		i++;
	}
}

void		ft_putnbr_fd(int n, int fd)
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
	(n_c == 0) ? ft_putchar_fd('0', fd) : ft_print_fd(&nb[0], fd);
}
