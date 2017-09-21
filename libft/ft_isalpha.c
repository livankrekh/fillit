/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 19:11:37 by aiholkin          #+#    #+#             */
/*   Updated: 2016/11/23 17:10:49 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	int res;

	res = 0;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		res = 1;
	return (res);
}