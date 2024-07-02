/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zeyilin222@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:03:37 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/07/02 18:20:10 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	flag;

	flag = 0;
	i = 0;
	while (((char *)str)[i] != '\0' && flag == 0)
	{
		if (((char *)str)[i] == c)
		{
			return ((char *)&str[i]);
			flag = 1;
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
