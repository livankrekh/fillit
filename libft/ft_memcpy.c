/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 13:38:45 by aiholkin          #+#    #+#             */
/*   Updated: 2016/11/27 12:23:04 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *dest_c;

	dest_c = (unsigned char*)dest;
	while (n--)
	{
		*(unsigned char*)dest = *(unsigned char*)src;
		dest++;
		src++;
	}
	return (dest_c);
}
