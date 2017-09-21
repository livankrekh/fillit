/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:37:57 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/03 13:02:50 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	if (s1 && s2)
	{
		i = 0;
		if (ft_strlen(s1) != ft_strlen(s2))
			return (0);
		while (s1[i] != 0 || s2[i] != 0)
		{
			i++;
			if (s1[i] != s2[i])
				return (0);
		}
		return (1);
	}
	return (0);
}
