/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 16:25:13 by kemmeric          #+#    #+#             */
/*   Updated: 2019/11/27 20:58:51 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Convert float to string with given precision
** (incomplete function, required more tests)
*/

char	*ft_ftoa(long double nb, int precision)
{
	char	*left;
	char	*right;
	char	*tmp;
	char	*r;
	int		ipart;

	ipart = (int)nb;
	left = ft_itoa(ipart);
	nb = nb - ipart;
	r = left;
	if (precision > 0)
	{
		nb = nb * ft_pow(10, precision);
		right = ft_itoa(ft_abs((int)nb));
		tmp = ft_strjoin(left, ".");
		r = ft_strjoin(tmp, right);
		ft_memdel((void**)&tmp);
		ft_memdel((void**)&left);
		ft_memdel((void**)&right);
	}
	return (r);
}
