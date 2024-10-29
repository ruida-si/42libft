/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:56:48 by ruida-si          #+#    #+#             */
/*   Updated: 2024/10/28 11:56:52 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(long number)
{
	int	i;

	i = 0;
	if (number < 0)
	{
		number *= -1;
		i++;
	}
	while (number > 0)
	{
		number /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*new;
	long	number;

	if (n == 0)
		return (ft_strdup("0"));
	number = n;
	len = length(number);
	if (number < 0)
		number *= -1;
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	new[len] = '\0';
	len--;
	while (number > 0)
	{
		new[len] = number % 10 + '0';
		number /= 10;
		len--;
	}
	if (len == 0)
		new[len] = '-';
	return (new);
}
/*
int main()
{
	int n = 0;
	printf(".%s.\n", ft_itoa(n));
}
*/