/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 14:01:01 by aiholkin          #+#    #+#             */
/*   Updated: 2016/11/27 13:09:54 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *dest_c;

	dest_c = dest;
	if (dest > src && n != 0)
	{
		dest = dest + (n - 1);
		src = src + (n - 1);
		while (n != 0)
		{
			*(char*)dest = *(char*)src;
			dest--;
			src--;
			n--;
		}
	}
	else
		return (ft_memcpy(dest, src, n));
	return (dest_c);
}
