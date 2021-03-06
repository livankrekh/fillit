/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 17:09:33 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/05 18:13:59 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_words(char const *s, char c)
{
	size_t	words;
	char	*s_c;

	s_c = (char*)s;
	words = 0;
	while (*s_c != '\0')
	{
		while (*s_c == c)
			s_c++;
		if (*s_c != c && *s_c != '\0')
		{
			words++;
			while (*s_c != c && *s_c != '\0')
				s_c++;
		}
	}
	return (words);
}

static char		*ft_putwords(char *s, char c)
{
	char	*s_c;
	char	*sub;
	int		len;

	s_c = s;
	len = 0;
	while (*s_c != c && *s_c != '\0')
	{
		len++;
		s_c++;
	}
	if ((sub = (char*)malloc(len + 1)) == NULL)
		return (NULL);
	while (*s != '\0' && *s != c)
	{
		*sub = *s;
		sub++;
		s++;
	}
	*sub = '\0';
	return (sub - len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	*s_c;
	char	**fresh;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	s_c = (char*)s;
	words = ft_words(s, c);
	if (!(fresh = (char**)malloc(sizeof(*fresh) * (words + 1))))
		return (NULL);
	while (*s_c != '\0' && i < words)
	{
		while (*s_c == c && *s_c != '\0')
			s_c++;
		fresh[i++] = ft_putwords(s_c, c);
		while (*s_c != c && *s_c != '\0')
			s_c++;
	}
	fresh[i] = NULL;
	return (fresh);
}
