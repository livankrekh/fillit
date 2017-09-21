/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:15:21 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/05 18:32:22 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (size == 0)
	{
		if ((str = (char*)malloc(sizeof(char) * size)) == NULL)
			return (NULL);
		else
			return (str);
	}
	str = (char*)malloc(size + 1);
	if (str != NULL)
	{
		while (i <= size)
			str[i++] = '\0';
		return (str);
	}
	else
		return (NULL);
}
