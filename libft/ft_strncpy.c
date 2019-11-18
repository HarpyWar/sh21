/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:14:04 by kemmeric          #+#    #+#             */
/*   Updated: 2018/11/26 16:09:29 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	srclen;

	if (len == 0)
		return (dest);
	srclen = ft_strlen(src);
	i = -1;
	while (++i < len)
	{
		if (i > srclen && i < len)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}
	return (dest);
}
