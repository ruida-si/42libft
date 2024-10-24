/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:12:48 by ruida-si          #+#    #+#             */
/*   Updated: 2024/10/22 17:12:53 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	j;

	j = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (size <= d)
		return (size + s);
	while (src[j] && (d < size -1))
		dst[d++] = src[j++];
	dst[d] = 0;
	return (d);
}
/*
int main()
{
	char dst[] = "Rui";
	char src[] = "Campos";
	size_t n = 7;
	printf("%s\n", dst);
	ft_strlcat(dst, src, n);
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcat(dst, src, 3));
}
*/
