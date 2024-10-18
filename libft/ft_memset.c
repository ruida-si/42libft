/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:04:35 by ruida-si          #+#    #+#             */
/*   Updated: 2024/10/18 16:28:19 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "Rui";
	char c = '0';
	int a = 2;
	printf("%s\n", ft_memset(str, c, a));
}
*/
