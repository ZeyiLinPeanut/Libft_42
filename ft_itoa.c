/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlin-zho <zeyilin222@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:51:31 by zlin-zho          #+#    #+#             */
/*   Updated: 2024/07/02 19:17:41 by zlin-zho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	len(int n)
{
	int	i;
	int	aux;

	i = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	aux = n;
	while (aux > 0)
	{
		aux = aux / 10;
		i++;
	}
	return (i);
}

int	create_model(int n)
{
	int	model;
	int	digits;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (1000000000);
	digits = len(n);
	if (n < 0)
		digits--;
	model = 1;
	while (--digits)
		model = model * 10;
	return (model);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			model;
	int			i;
	long int	aux;

	aux = (long int)n;
	model = create_model(n);
	i = 0;
	str = malloc(len(n) + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i++] = '-';
		aux = -aux;
	}
	while (model > 0)
	{
		str[i++] = (aux / model) + 48;
		aux = aux % model;
		model = model / 10;
	}
	str[i] = '\0';
	return (str);
}
