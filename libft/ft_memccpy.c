/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 12:06:57 by aiholkin          #+#    #+#             */
/*   Updated: 2016/11/27 12:39:40 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *dest_c;

	dest_c = dest;
	while (n--)
	{
		*(char*)dest = *(char*)src;
		if (*(char*)src == c)
		{
			dest++;
			return (dest);
		}
		dest++;
		src++;
	}
	return (NULL);
}
