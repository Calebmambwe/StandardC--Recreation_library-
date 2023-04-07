/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmambwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 21:51:02 by cmambwe           #+#    #+#             */
/*   Updated: 2019/10/03 21:51:04 by cmambwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*node;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node = f(lst);
	node->next = (lst->next) ? ft_lstmap(lst->next, f) : NULL;
	return (node);
}
