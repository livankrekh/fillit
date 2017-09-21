/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:09:00 by aiholkin          #+#    #+#             */
/*   Updated: 2016/11/26 17:44:26 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	char *dst_c;

	if (n <= 0)
		return (dst);
	dst_c = dst;
	while (*dst_c != '\0')
		dst_c++;
	while (*src != '\0' && n > 0)
	{
		*dst_c = *src;
		dst_c++;
		src++;
		n--;
	}
	*dst_c = '\0';
	return (dst);
}
