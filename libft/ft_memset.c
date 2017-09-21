/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 10:45:58 by aiholkin          #+#    #+#             */
/*   Updated: 2016/11/26 11:00:43 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	char *ptr;

	ptr = (char*)memptr;
	while (num != 0)
	{
		*ptr = val;
		ptr++;
		num--;
	}
	return (memptr);
}
