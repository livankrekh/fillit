/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 20:37:23 by aiholkin          #+#    #+#             */
/*   Updated: 2016/11/26 16:35:32 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != c)
	{
		if (*str == '\0' && c == '\0')
			return (char*)(str);
		else if (*str == '\0' && c != '\0')
			return (NULL);
		str++;
	}
	return (char*)(str);
}
