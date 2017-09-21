/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 13:07:48 by aiholkin          #+#    #+#             */
/*   Updated: 2016/11/27 12:16:35 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str_a, const void *str_b, size_t num)
{
	while (num--)
	{
		if (*(unsigned char*)str_a != *(unsigned char*)str_b)
			return (*(unsigned char*)str_a - *(unsigned char*)str_b);
		str_a++;
		str_b++;
	}
	return (0);
}
