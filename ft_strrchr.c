/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zeyilin222@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:47:12 by agomez-o          #+#    #+#             */
/*   Updated: 2024/07/02 18:09:51 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int	longitud;
	int	flag;

	flag = 0;
	longitud = ft_strlen(str);
	while (longitud >= 0 && flag == 0)
	{
		if (str[longitud] == c)
		{
			return ((char *)&str[longitud]);
			flag = 1;
		}
		longitud--;
	}
	return (NULL);
}
