/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:20:05 by kemmeric          #+#    #+#             */
/*   Updated: 2018/11/28 22:15:06 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int					i;
	int					result;
	const char			*s;
	const unsigned char	*us1;
	const unsigned char *us2;

	us1 = (const unsigned char*)s1;
	us2 = (const unsigned char*)s2;
	result = 0;
	i = 0;
	s = ft_strlen(s1) >= ft_strlen(s2) ? s1 : s2;
	while (s[i] != '\0' && i < n)
	{
		if (us1[i] < us2[i])
			return (us1[i] - us2[i]);
		else if (us1[i] > us2[i])
			return (us1[i] - us2[i]);
		i++;
	}
	return (0);
}
