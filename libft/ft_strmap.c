/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:03:00 by aiholkin          #+#    #+#             */
/*   Updated: 2016/11/27 16:30:54 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	size_t	i;
	size_t	j;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	fresh = (char *)malloc(j + 1);
	if (fresh != NULL)
	{
		while (s[i] != 0)
		{
			fresh[i] = f(s[i]);
			i++;
		}
		fresh[i] = '\0';
		return (fresh);
	}
	return (NULL);
}
