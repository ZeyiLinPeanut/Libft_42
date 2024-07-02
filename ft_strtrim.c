/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zeyilin222@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:20:22 by alromero          #+#    #+#             */
/*   Updated: 2024/07/02 18:09:23 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	find_char(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
		if (s1[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*aux;
	size_t	len;
	size_t	k;

	i = 0;
	k = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	while (find_char(set, s1[i]) && s1[i])
		i++;
	while (find_char(set, s1[len - 1]) && (len - 1))
		len--;
	if (len < i)
		len = i;
	aux = malloc(len - i + 1);
	if (!aux)
		return (NULL);
	while (i < len)
		aux[k++] = s1[i++];
	aux[k] = '\0';
	return (aux);
}
