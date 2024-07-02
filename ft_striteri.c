/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zeyilin222@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 21:52:04 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/07/02 21:55:58 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	j;

	i = ft_strlen(s);
	j = 0;
	if (s != NULL && f != NULL)
	{
		while (j < i)
		{
			(*f)(j, s);
			s++;
			j++;
		}
	}
}
