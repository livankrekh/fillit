/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiholkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 12:19:11 by aiholkin          #+#    #+#             */
/*   Updated: 2016/12/02 12:35:08 by aiholkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmplst;
	t_list	*nxtlst;

	tmplst = *alst;
	while (tmplst)
	{
		nxtlst = tmplst->next;
		del(tmplst->content, tmplst->content_size);
		free(tmplst);
		tmplst = nxtlst;
	}
	*alst = NULL;
}
