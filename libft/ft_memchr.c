/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 12:31:06 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/04 13:54:38 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int val, size_t num)
{
	unsigned char	*ptr_c;
	unsigned char	val_c;
	int				i;

	i = 0;
	val_c = (unsigned char)val;
	ptr_c = (unsigned char*)ptr;
	while (num--)
	{
		if (ptr_c[i] == val_c)
			return (ptr_c + i);
		i++;
	}
	return (NULL);
}
