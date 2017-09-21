/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 16:43:50 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/01 17:40:18 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *l, size_t len)
{
	size_t n;

	if (ft_strlen(big) < len)
		len = ft_strlen(big);
	if (ft_strlen(l) == 0)
		return (char*)(big);
	if (ft_strlen(big) < ft_strlen(l) || len < ft_strlen(l))
		return (NULL);
	n = ft_strlen(l);
	while (*big && len-- >= n)
	{
		if (ft_strncmp(big, l, ft_strlen(l)) == 0)
			return (char*)(big);
		big++;
	}
	return (NULL);
}
