/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:51:58 by ruida-si          #+#    #+#             */
/*   Updated: 2024/10/25 14:52:01 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		len;
	int		j;

	len = ft_strlen(s1);
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, s1[i]) && i < len)
		i++;
	j = len -1;
	while (ft_strchr(set, s1[j]))
		j--;
	new = malloc(j - i + 2);
	if (!new)
		return (NULL);
	while (i <= j)
	{
		*new++ = s1[i];
		i++;
	}
	*new = '\0';
	return (new);
}
/*
int main()
{
	char s1[] = "porto42";
	char set[] = "42";
	printf("%s\n", ft_strtrim(s1, set));
}
*/