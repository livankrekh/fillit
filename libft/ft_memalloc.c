/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 14:53:38 by aiholkin          #+#    #+#             */
/*   Updated: 2016/11/27 15:00:18 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *arr;

	arr = (unsigned char*)malloc(size);
	if (arr != NULL)
	{
		ft_memset(arr, 0, size);
		return (arr);
	}
	return (NULL);
}
