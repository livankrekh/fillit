/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 17:02:51 by aiholkin          #+#    #+#             */
/*   Updated: 2016/11/27 17:15:57 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;

	if (s == NULL)
		return (NULL);
	sub = (char*)malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	ft_strcpy(sub, &s[start]);
	sub[len] = '\0';
	return (sub);
}
