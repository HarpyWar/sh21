/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 13:50:48 by kemmeric          #+#    #+#             */
/*   Updated: 2018/12/07 13:58:57 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	toupper(char *c)
{
	*c = ft_toupper(*c);
}

char		*ft_strtoupper(char *s)
{
	ft_striter(s, &toupper);
	return (s);
}
