/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:11:29 by kemmeric          #+#    #+#             */
/*   Updated: 2019/11/18 17:49:45 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dstlen;
	size_t		srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen + 1 > size)
		dstlen = size;
	else if (dstlen + 1 < size)
	{
		i = dstlen;
		while (i < size - 1)
			dst[i++] = *src++;
		dst[i] = '\0';
	}
	return (dstlen + srclen);
}
