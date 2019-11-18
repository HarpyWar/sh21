/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:42:55 by kemmeric          #+#    #+#             */
/*   Updated: 2018/12/05 20:50:22 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	strlen;
	size_t	sublen;
	int		maxlen;

	strlen = ft_strlen(needle);
	if (strlen == 0)
		return ((char*)haystack);
	i = 0;
	maxlen = len - strlen;
	if (maxlen < 0 && haystack != NULL && needle != NULL)
		return (NULL);
	while (haystack[i] != '\0' && i <= maxlen)
	{
		sublen = strlen - (len - i < strlen ? len - i : 0);
		if (ft_strnequ(haystack + i, needle, sublen))
			return ((char*)haystack + i);
		i++;
	}
	return (NULL);
}
