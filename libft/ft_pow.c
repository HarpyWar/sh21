/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 13:35:41 by kemmeric          #+#    #+#             */
/*   Updated: 2018/12/07 13:43:06 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_pow(int nb, unsigned int p)
{
	size_t	i;
	int		result;

	if (p == 0)
		return (1);
	if (nb == 0)
		return (0);
	i = 0;
	result = nb;
	while (++i < p)
		result *= ft_abs(nb);
	return (result);
}
