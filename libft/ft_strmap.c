/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:16:51 by kemmeric          #+#    #+#             */
/*   Updated: 2018/12/05 19:38:35 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f) (char))
{
	unsigned int	len;
	int				i;
	char			*str;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = ft_strnew(len);
	if (str != NULL)
	{
		i = -1;
		while (++i < len)
			str[i] = f(s[i]);
	}
	return (str);
}
