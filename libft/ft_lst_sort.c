/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:08:03 by kemmeric          #+#    #+#             */
/*   Updated: 2019/11/05 17:37:06 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_sort(t_list *alst, int (*cmp)(t_list *a, t_list *b))
{
	t_list	*begin_list;
	t_list	*tmp;
	void	*swap;

	begin_list = alst;
	while (alst != NULL)
	{
		tmp = begin_list;
		while (tmp->next != NULL)
		{
			if (cmp(tmp, tmp->next) > 0)
			{
				swap = tmp->content;
				tmp->content = tmp->next->content;
				tmp->next->content = swap;
			}
			tmp = tmp->next;
		}
		alst = alst->next;
	}
	alst = begin_list;
	return (alst);
}
