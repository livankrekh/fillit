/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:32:57 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/05 18:46:53 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *sa, const char *sb, size_t num)
{
	if (num == 0)
		return (0);
	while (*sa == *sb && num > 1)
	{
		if (*sa == '\0' || *sb == '\0')
			return (*(unsigned char*)sa - *(unsigned char*)sb);
		sa++;
		sb++;
		num--;
	}
	return (*(unsigned char*)sa - *(unsigned char*)sb);
}
