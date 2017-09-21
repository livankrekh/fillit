/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 14:00:27 by aiholkin          #+#    #+#             */
/*   Updated: 2016/11/27 14:01:51 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	size_t	j;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return (char*)(str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			if (j == ft_strlen(to_find) - 1)
				return (char*)(str);
			i++;
			j++;
		}
		i = 0;
		str++;
	}
	return (NULL);
}
