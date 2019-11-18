/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:42:51 by kemmeric          #+#    #+#             */
/*   Updated: 2018/11/27 19:11:20 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	i;
	char	*s;

	s = s1;
	s1 += ft_strlen(s1);
	while (n-- && *s2 != '\0')
		*s1++ = *s2++;
	*s1 = '\0';
	return (s);
}
