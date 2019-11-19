/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:29:07 by kemmeric          #+#    #+#             */
/*   Updated: 2019/11/06 16:29:17 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_nbrlen(int nb)
{
	char	*tmp;
	int		len;

	tmp = ft_itoa(nb);
	len = (int)ft_strlen(tmp);
	free(tmp);
	return (len);
}
