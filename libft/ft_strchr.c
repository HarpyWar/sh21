/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:43:19 by kemmeric          #+#    #+#             */
/*   Updated: 2018/11/28 21:17:23 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	found;

	found = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char*)s);
		s++;
	}
	if (!found && c == '\0')
		return ((char*)s);
	return (NULL);
}
