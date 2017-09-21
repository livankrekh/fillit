/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 17:46:13 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/02 11:39:13 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*nlst;

	if ((nlst = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		nlst->content_size = 0;
		nlst->content = NULL;
	}
	else
	{
		if ((nlst->content = malloc(sizeof(content))) == NULL)
			return (NULL);
		nlst->content = ft_memcpy(nlst->content, content, content_size);
		nlst->content_size = content_size;
	}
	nlst->next = NULL;
	return (nlst);
}
