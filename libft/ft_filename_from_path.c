/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filename_from_path.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:53:04 by kemmeric          #+#    #+#             */
/*   Updated: 2019/11/12 17:57:06 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_filename_from_path(char *path)
{
	int		i;
	int		last_slash_pos;

	i = 0;
	last_slash_pos = 0;
	while (path[i])
	{
		if (path[i] == '/')
			last_slash_pos = i + 1;
		i++;
	}
	path += last_slash_pos;
	return (path);
}
