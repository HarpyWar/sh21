/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_shift.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 14:43:02 by kemmeric          #+#    #+#             */
/*   Updated: 2018/12/07 15:29:09 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone_shift(t_list **alst, t_list *lstdel,
	void (*del) (void *, size_t))
{
	t_list	*prev;
	t_list	*next;
	t_list	*first;

	if (alst == NULL || lstdel == NULL)
		return ;
	first = *alst;
	prev = NULL;
	while (*alst)
	{
		next = (*alst)->next;
		if (*alst == lstdel)
		{
			if (prev == NULL)
				first = next;
			else
				prev->next = next;
			ft_lstdelone(&(*alst), del);
			break ;
		}
		prev = *alst;
		*alst = next;
	}
	*alst = first;
}
