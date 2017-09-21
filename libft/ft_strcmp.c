/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 18:09:08 by aiholkin          #+#    #+#             */
/*   Updated: 2016/11/26 17:14:58 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	size_t len_a;
	size_t len_b;
	size_t max;
	size_t i;

	i = 0;
	len_a = ft_strlen(str1);
	len_b = ft_strlen(str2);
	if (len_a > len_b)
		max = len_b;
	else
		max = len_a;
	while (i < max && str1[i] == str2[i])
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
