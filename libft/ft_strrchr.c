/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:42:57 by kemmeric          #+#    #+#             */
/*   Updated: 2018/11/28 21:23:53 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	found;
	int	len;

	len = ft_strlen(s) + 1;
	found = 0;
	while (len--)
	{
		if (*(s + len) == (char)c)
			return ((char*)s + len);
	}
	if (!found && c == '\0')
		return ((char*)s + len);
	return (NULL);
}
