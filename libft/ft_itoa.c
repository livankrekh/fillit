/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 11:42:59 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/05 18:15:10 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_zerostr(char *nb)
{
	nb[0] = '0';
	nb[1] = '\0';
	return (nb);
}

static int	ft_nbsize(int nb)
{
	size_t	size;

	if (nb == 0)
		return (size = 1);
	if (nb < 0)
		size = 1;
	else
		size = 0;
	if (nb == -2147483648)
	{
		nb = nb + 1;
		nb = nb * (-1);
	}
	else if (nb < 0)
		nb = nb * (-1);
	while (nb >= 1)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	size_t	size;
	char	*nb;
	int		swich;

	swich = 1;
	size = ft_nbsize(n);
	if ((nb = (char*)malloc(size + 1)) == NULL)
		return (NULL);
	if (n == 0)
		return (ft_zerostr(nb));
	nb[size] = '\0';
	if (n < 0)
	{
		nb[0] = '-';
		swich = -1;
	}
	while (n != 0)
	{
		size--;
		nb[size] = (((n % 10) * (swich)) + 48);
		n = n / 10;
	}
	return (nb);
}
