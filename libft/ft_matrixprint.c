/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 14:05:19 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/05 14:32:23 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_matrixprint(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putendl(str[i]);
		i++;
	}
}
