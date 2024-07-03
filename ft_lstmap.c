/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zlin-zho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:53:50 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/07/03 18:16:47 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*gon;
	t_list	*aux;
	t_list	*auxgon;
	void	*aux2;

	if (!lst || !f)
		return (NULL);
	gon = ft_lstnew(f(lst->content));
	if (!gon)
		return (NULL);
	aux = lst->next;
	auxgon = gon;
	while (aux)
	{
		aux2 = f(aux->content);
		if (!ft_lstnew(aux2))
			return (NULL);
		auxgon->next = ft_lstnew(aux2);
		if (!(auxgon->next))
			return (ft_lstclear(&gon, del), NULL);
		auxgon = auxgon->next;
		aux = aux->next;
	}
	return (gon);
}
