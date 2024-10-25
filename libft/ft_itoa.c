/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:08:48 by ruida-si          #+#    #+#             */
/*   Updated: 2024/10/25 18:08:51 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(int n)
{
	int		min;
	long	numb;
	int		i;

	i = 0;
	min = 0;
	numb = n;
	if (n < 0)
	{
		min = 1;
		numb = -n;
	}
	while (numb > 0)
	{
		numb /= 10;
		i++;
	}
	return (i + min);
}
char	*ft_itoa(int n)
{
	int		i;
	char	*new;
	long	number;

	new = malloc(len(n) + 1);
	if (!new)
		return (NULL);
	i = len(n) +1;
	new[i] = '\0';
	i--;
	while (number > 0)
	{
		new[i] = number % 10 + '0';
		number /= 10;
		i--;
	}
	if (n < 0)
		new[i] = '-';
	return (new);
}

int main()
{
	int n = -1234;
	printf("%s\n", ft_itoa(n));
}
