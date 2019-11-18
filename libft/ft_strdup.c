/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:53:12 by kemmeric          #+#    #+#             */
/*   Updated: 2018/11/24 18:19:24 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*str;
	int		len;

	len = ft_strlen(s1);
	str = (char*)ft_memalloc(len + 1);
	if (str == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	str[len] = '\0';
	while (len)
	{
		len--;
		str[len] = s1[len];
	}
	return (str);
}
