/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countchars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 13:55:57 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/05 14:02:40 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countchars(char const *str)
{
	int		chars;
	char	*s_c;

	s_c = (char*)str;
	chars = 0;
	while (ft_isalpha(*s_c) && *s_c != '\0')
	{
		chars++;
		s_c++;
	}
	return (chars);
}
