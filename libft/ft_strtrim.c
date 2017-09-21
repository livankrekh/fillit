/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 17:27:15 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/05 19:34:15 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_end(char const *s)
{
	size_t	end;

	end = ft_strlen(s) - 1;
	while ((s[end] == '\n' || s[end] == '\t' || s[end] == ' ') && end != 0)
		end--;
	return (end);
}

static int		ft_start(char const *s)
{
	size_t	sr;

	sr = 0;
	while ((s[sr] == '\n' || s[sr] == '\t' || s[sr] == ' ') && s[sr] != '\0')
		sr++;
	return (sr);
}

char			*ft_strtrim(char const *s)
{
	size_t	sr;
	size_t	end;
	char	*fresh;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	end = ft_end(s);
	sr = ft_start(s);
	if (sr >= end || (ft_strlen(s) == 0))
	{
		fresh = (char*)malloc(sizeof(char) * 1);
		*fresh = '\0';
		return (fresh);
	}
	if ((fresh = (char*)malloc(end - sr + 2)) == NULL)
		return (NULL);
	if (!s || (ft_strlen(s) == 0))
		return (NULL);
	while (sr <= end)
		fresh[i++] = s[sr++];
	fresh[i] = '\0';
	return (fresh);
}
