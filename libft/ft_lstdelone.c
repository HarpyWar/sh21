/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 17:42:30 by kemmeric          #+#    #+#             */
/*   Updated: 2018/12/07 15:05:13 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description
**  	Takes as a parameter a link’s pointer address and frees the memory
** 		of the link’s content using the function del given as a parameter,
** 		then frees the link’s memory using free(3). The memory of next must
**      not be freed under any circumstance. Finally, the pointer to the link
** 		that was just freed must be set to NULL (quite similar to the function
** 		ft_memdel in the mandatory part).
** Param. #1
** 		The adress of a pointer to a link that needs to be freed.
** Return value
** 		None.
** Libc functions
**		free(3)
*/

void	ft_lstdelone(t_list **alst, void (*del) (void *, size_t))
{
	if (alst == NULL)
		return ;
	del((*alst)->content, (*alst)->content_size);
	(*alst)->content = NULL;
	(*alst)->content_size = 0;
	ft_memdel((void**)alst);
}
