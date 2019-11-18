/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 19:17:12 by kemmeric          #+#    #+#             */
/*   Updated: 2018/11/24 16:19:05 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *h, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char*)h;
	while (len--)
		*tmp++ = c;
	return (h);
}
