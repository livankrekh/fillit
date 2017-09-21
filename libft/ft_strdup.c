/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 19:06:05 by aiholkin          #+#    #+#             */
/*   Updated: 2016/11/26 16:18:18 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*dup;
	int		i;

	i = 0;
	len = ft_strlen(str);
	dup = (char*)malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	else
	{
		while (str[i] != '\0')
		{
			dup[i] = str[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}
