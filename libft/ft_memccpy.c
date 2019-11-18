/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:13:26 by kemmeric          #+#    #+#             */
/*   Updated: 2018/11/24 14:30:00 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
		int c, size_t n)
{
	int	i;
	int found;

	i = 0;
	found = 0;
	while (n--)
	{
		if (((unsigned char*)src)[i] == (unsigned char)c)
			found = 1;
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
		if (found)
			break ;
	}
	if (!found)
		return (NULL);
	return (dst + i);
}
