/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zeyilin222@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:53:56 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/07/02 19:52:39 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content)
{
	t_list	*prueba;

	prueba = (t_list *)malloc(sizeof(t_list));
	if (!prueba)
		return (NULL);
	prueba->content = (void *)content;
	prueba->next = NULL;
	return (prueba);
}
