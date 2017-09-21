/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:03:39 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/05 14:33:09 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*str_e;
	char	*str_s;
	char	temp;

	str_s = str;
	str_e = str + ft_strlen(str) - 1;
	while (str_e >= str_s)
	{
		temp = *str_s;
		*str_s = *str_e;
		*str_e = temp;
		str_s++;
		str_e--;
	}
	return (str);
}
