/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:54:55 by kemmeric          #+#    #+#             */
/*   Updated: 2018/11/20 15:12:11 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_sqrt(int nb)
{
	int		max;
	int		min;
	long	mid;
	int		i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	min = 0;
	max = nb;
	while (++i < 1000)
	{
		mid = (max + min) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid > nb)
			max = mid;
		else
			min = mid;
	}
	return (0);
}
