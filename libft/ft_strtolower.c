/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 13:50:48 by kemmeric          #+#    #+#             */
/*   Updated: 2018/12/07 13:56:57 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	tolower(char *c)
{
	*c = ft_tolower(*c);
}

char		*ft_strtolower(char *s)
{
	ft_striter(s, &tolower);
	return (s);
}
