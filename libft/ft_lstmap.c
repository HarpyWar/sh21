/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 19:07:40 by kemmeric          #+#    #+#             */
/*   Updated: 2018/12/07 15:50:28 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description
** 		Iterates a list lst and applies the function f to each link to
**		create a “fresh” list (using malloc(3)) resulting from the
**		successive applications of f. If the allocation fails, the
**		function returns NULL.
** Param. #1
** 		A pointer’s to the first link of a list.
** Param. #2
** 		The address of a function to apply to each link of a list.
** Return value
** 		The new list.
** Libc functions
** 		malloc(3), free(3).
*/

static void	free_el(void *content, size_t content_size)
{
	content_size = 0;
	ft_memdel(&content);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

	new = NULL;
	while (lst)
	{
		if (!(tmp = f(lst)))
		{
			ft_lstdel(&new, &free_el);
			return (NULL);
		}
		ft_lstaddback(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
