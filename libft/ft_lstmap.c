/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:14:27 by ruida-si          #+#    #+#             */
/*   Updated: 2024/10/30 15:14:30 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		i;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	
	i = ft_lstsize(lst);
	new = malloc(sizeof(t_list) * i);
	if (!new)
		return (NULL);


}
