/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 18:38:31 by kemmeric          #+#    #+#             */
/*   Updated: 2018/12/05 19:13:57 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description
** 		Adds the element new at the beginning of the list.
** Param. #1
** 		The address of a pointer to the first link of a list.
** Param. #2
** 		The link to add at the beginning of the list.
** Return value
** 		None.
** Libc functions
** 		None.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *alst;
	*alst = new;
}
