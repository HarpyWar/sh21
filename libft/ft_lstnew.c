/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 17:10:41 by kemmeric          #+#    #+#             */
/*   Updated: 2018/11/29 19:17:35 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = (t_list*)ft_memalloc(sizeof(*list));
	if (list != NULL)
	{
		if (content == NULL)
		{
			list->content = NULL;
			list->content_size = 0;
		}
		else
		{
			list->content = ft_memalloc(content_size);
			if (list->content == NULL)
			{
				ft_memdel((void*)&list);
				return (NULL);
			}
			ft_memcpy(list->content, content, content_size);
			list->content_size = content_size;
		}
		list->next = NULL;
	}
	return (list);
}
