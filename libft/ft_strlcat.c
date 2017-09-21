/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:55:46 by aiholkin          #+#    #+#             */
/*   Updated: 2016/11/26 16:34:47 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*dst_c;
	size_t	dst_size;
	size_t	src_size;

	src_size = ft_strlen(src);
	if (ft_strlen(dst) >= size)
		dst_size = size;
	else
		dst_size = ft_strlen(dst);
	dst_c = dst;
	while (*dst_c != '\0')
		dst_c++;
	while (*src != '\0' && dst_c - dst < (long)size - 1)
	{
		*dst_c = *src;
		dst_c++;
		src++;
	}
	*dst_c = '\0';
	return (src_size + dst_size);
}
