/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zeyilin222@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 18:15:58 by alromero          #+#    #+#             */
/*   Updated: 2024/07/02 20:47:51 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	if (!s || !str)
		return (NULL);
	i = 0;
	str = malloc(len + 1);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (len--)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
