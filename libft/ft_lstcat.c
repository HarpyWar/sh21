/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:36:59 by kemmeric          #+#    #+#             */
/*   Updated: 2019/11/11 19:37:36 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		**ft_lstcat(t_list **lst1, t_list **lst2)
{
	t_list	*start;

	if (!lst1 || !lst2 || !(*lst2))
		return (lst1);
	if (!(*lst1))
	{
		*lst1 = *lst2;
		return (lst1);
	}
	start = *lst1;
	while (*lst1 && (*lst1)->next)
	{
		*lst1 = (*lst1)->next;
	}
	(*lst1)->next = *lst2;
	*lst1 = start;
	return (lst1);
}
