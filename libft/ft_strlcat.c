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
#include <string.h>
#include <bsd/string.h>

//
// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	j;
//
// 	j = 0;
// 	i = ft_strlen(dst);
// 	while (src[i])
// 		dst[i++] = src[j++];
// 	return (ft_strlen(dst));
// }

int main()
{
	char dst[] = "Rui Campos";
	char src[] = "Campos";
	size_t n = 4;
	printf("%s\n", dst);
	size_t b = strlcat(dst, src, n);
	printf("%zu\n %s\n", b, dst);
}
