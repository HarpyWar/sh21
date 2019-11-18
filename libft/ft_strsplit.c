/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 20:10:35 by kemmeric          #+#    #+#             */
/*   Updated: 2019/11/18 17:15:28 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return array of strings from a string delimeted by a char
*/

static void		*arrclear(char ***tab)
{
	ft_strarrdel(tab);
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	size_t		i;
	size_t		pos;
	size_t		len;
	size_t		count;

	if (s == NULL)
		return (NULL);
	count = ft_count_words(s, c);
	tab = (char**)malloc(sizeof(char**) * count + 1);
	if (tab == NULL)
		return (NULL);
	pos = 0;
	i = 0;
	while ((len = ft_next_word(s, &pos, c, 0)))
	{
		tab[i] = ft_strsub(s, pos, len);
		if (tab[i] == NULL)
			return (arrclear(&tab));
		pos += len;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
