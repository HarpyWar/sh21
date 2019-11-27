/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:07:41 by kemmeric          #+#    #+#             */
/*   Updated: 2019/11/27 19:08:08 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *str)
{
	int		len;
	int 	i;
	char	c;

	len = ft_strlen(str);
	i = 0;
	while (str[i])
	{
		if (i >= len)
			break;
		c = str[i];
		str[i] = str[len];
		str[len] = c;
		len--;
		i++;
	}
	return (str);
}
