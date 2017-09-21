/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 14:42:27 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/22 14:47:29 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "figure.h"

void	ft_allocate(t_conf *figure, char **m)
{
	int i;
	int len1;
	int len2;
	int	index;

	i = 0;
	index = 0;
	while (m[i] != NULL)
	{
		len1 = 0;
		len2 = 0;
		if (m[i][0] == '#' || m[i][1] == '#' ||
			m[i][2] == '#' || m[i][3] == '#')
		{
			while (m[i][len1] == '.')
				len1++;
			while (m[i][len1 + len2] == '#' && m[i][len1 + len2] != '\0')
				len2++;
			ft_include(figure->tetrimin, ft_with(m, len1), len2, index);
			index++;
			i++;
		}
		else
			i++;
	}
}
