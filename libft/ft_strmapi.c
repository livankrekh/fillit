/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:32:05 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/03 12:59:03 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fresh;
	size_t	i;
	size_t	j;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	j = ft_strlen(s);
	fresh = (char *)malloc(j + 1);
	if (fresh != NULL)
	{
		while (s[i] != 0)
		{
			fresh[i] = f(i, s[i]);
			i++;
		}
		fresh[i] = '\0';
		return (fresh);
	}
	return (NULL);
}
