/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 13:17:35 by kemmeric          #+#    #+#             */
/*   Updated: 2019/11/18 17:16:54 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return count of words in a given string delimeted by a char
*/

size_t			ft_count_words(char const *s, char c)
{
	size_t		len;
	size_t		pos;
	size_t		count;

	pos = 0;
	count = 0;
	while ((len = ft_next_word(s, &pos, c, 0)))
	{
		pos += len;
		count++;
	}
	return (count);
}
