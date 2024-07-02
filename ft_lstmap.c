/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zeyilin222@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:53:50 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/07/02 18:25:40 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*gon;
	t_list	*aux;
	t_list	*auxgon;

	aux = lst;
	gon = malloc(sizeof(t_list));
	if (!gon)
		return (0);
	auxgon = gon;
	while (aux)
	{
		auxgon->content = f(aux->content);
		next = malloc(sizeof(t_list));
		if (!(auxgon->next))
			ft_lstclear(&aux, del);
		aux = aux->next;
		auxgon = auxgon->next;
	}
	return (gon);
}
