/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 16:02:46 by kemmeric          #+#    #+#             */
/*   Updated: 2019/11/18 17:35:31 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Concat list content into a new string
*/

char				*lst2str(t_list *alst)
{
	t_list			*line;
	char			*str;
	size_t			len;

	line = alst;
	len = 0;
	while (line)
	{
		len += line->content_size;
		line = line->next;
	}
	str = ft_strnew(len);
	if (str)
	{
		line = alst;
		while (line)
		{
			ft_strlcat(str, (char*)(line->content), len);
			line = line->next;
		}
	}
	return (str);
}
