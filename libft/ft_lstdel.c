/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 18:04:13 by kemmeric          #+#    #+#             */
/*   Updated: 2018/12/07 15:07:37 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description
** 		Takes as a parameter the adress of a pointer to a link and frees
** 		the memory of this link and every successors of that link using t
**		he functions del and free(3). Finally the pointer to the link that
**		was just freed must be set to NULL (quite similar to the function
**		ft_memdel from the mandatory part).
** Param. #1
** 		The address of a pointer to the first link of a list that needs to
** 		be freed.
** Return value
** 		None.
** Libc functions
** 		free(3)
*/

void		ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list	*next;

	if (alst == NULL)
		return ;
	while (*alst != NULL)
	{
		next = (*alst)->next;
		ft_lstdelone(&(*alst), del);
		*alst = next;
	}
}
