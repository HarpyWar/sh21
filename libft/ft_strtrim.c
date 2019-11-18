/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 19:21:45 by kemmeric          #+#    #+#             */
/*   Updated: 2018/12/05 19:33:30 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	i;
	size_t	start;
	size_t	end;

	if (s == NULL)
		return (NULL);
	start = 0;
	end = 0;
	len = ft_strlen(s);
	i = -1;
	while (++i < len)
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		{
			start = i;
			break ;
		}
	i = len;
	while (--i)
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		{
			end = i + 1;
			break ;
		}
	return (ft_strsub(s, start, end - start));
}
