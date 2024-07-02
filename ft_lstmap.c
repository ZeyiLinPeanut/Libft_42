/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zeyilin222@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:53:50 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/07/02 19:50:36 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*gon;
	t_list	*aux;
	t_list	*auxgon;

	if (!lst || !f)
		return (NULL);
	gon = ft_lstnew(f(lst->content));
	if (!gon)
		return (NULL);
	aux = lst->next;
	auxgon = gon;
	while (aux)
	{
		auxgon->next = ft_lstnew(f(aux->content));
		if (!(auxgon->next))
		{
			ft_lstclear(&gon, del);
			return (NULL);
		}
		auxgon = auxgon->next;
		aux = aux->next;
	}
	return (gon);
}
