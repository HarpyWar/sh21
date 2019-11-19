/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pad.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:38:11 by kemmeric          #+#    #+#             */
/*   Updated: 2019/11/13 16:27:20 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Put string only given size, and cut if not fit
*/

static void	ft_putstrl(char *str, int size)
{
	int		i;

	i = 0;
	while (i++ < size && *str)
		ft_putchar(*str++);
}

/*
** Put str with padding
** size - print size
** pad = 0 (left) | pad = 1 (right)
** c - padding char
*/

void		ft_putstr_pad(char *str, int size, char c, int pad)
{
	int		i;

	i = 0;
	if (!pad)
		ft_putstrl(str, size);
	i = ft_strlen(str);
	while (i++ < size)
		ft_putchar(c);
	if (pad)
		ft_putstrl(str, size);
}
