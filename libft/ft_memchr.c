/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:18:40 by kemmeric          #+#    #+#             */
/*   Updated: 2018/11/23 19:38:27 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*p;

	p = NULL;
	while (n--)
	{
		if (*((unsigned char*)s) == (unsigned char)c)
		{
			p = (void*)s;
			break ;
		}
		s++;
	}
	return (p);
}
