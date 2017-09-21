/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 10:26:37 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/05 19:35:15 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int sym)
{
	const char	*str_c;
	int			counter;
	int			len;

	counter = 0;
	str_c = str;
	len = ft_strlen(str) + 1;
	while (len)
	{
		if (*str_c == sym)
		{
			str = str_c;
			counter++;
		}
		str_c++;
		len--;
	}
	if (counter == 0)
		return (NULL);
	else
		return (char*)(str);
}
