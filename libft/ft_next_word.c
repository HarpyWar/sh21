/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 13:17:53 by kemmeric          #+#    #+#             */
/*   Updated: 2019/11/18 17:16:16 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description
**	 	Iterates string until delimeted char is found, and update start position
**	 	to the beginning of the word.
** Return
**		Length of the word, or 0 if word not found.
*/

size_t			ft_next_word(char const *s, size_t *start, char delim,
	int not_trim_delims)
{
	int			is_word;
	size_t		i;

	is_word = 0;
	i = *start - 1;
	while (s[++i] != '\0')
	{
		if (s[i] == delim)
		{
			if (is_word)
				break ;
			if (not_trim_delims)
			{
				is_word = 1;
				i++;
				break ;
			}
		}
		else if (!is_word)
		{
			*start = i;
			is_word = 1;
		}
	}
	return (is_word ? i - *start : 0);
}
