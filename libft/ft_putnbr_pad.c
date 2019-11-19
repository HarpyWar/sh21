/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pad.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:38:11 by kemmeric          #+#    #+#             */
/*   Updated: 2019/11/06 17:07:41 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Put number with padding
** size - print size
** pad = 0 (left) | pad = 1 (right)
** c - padding char
*/

void		ft_putnbr_pad(int nb, int size, char c, int pad)
{
	int		i;
	char	*tmp;

	tmp = ft_itoa(nb);
	ft_putstr_pad(tmp, size, c, pad);
	free(tmp);
}
