/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 16:37:58 by kemmeric          #+#    #+#             */
/*   Updated: 2018/12/07 13:46:01 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

static int		ft_atoi_contain_sign_or_spaces(char c, int *sign)
{
	if ((c >= 9 && c <= 13) || c == ' ')
	{
		return (1);
	}
	if (c == '-')
	{
		*sign = -1;
		return (1);
	}
	if (c == '+')
	{
		*sign = 1;
		return (1);
	}
	return (0);
}

int				ft_atoi(const char *str)
{
	size_t		i;
	int			result;
	int			sign;
	int			count;

	count = 0;
	sign = 0;
	result = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (result == 0 && sign == 0)
			if (ft_atoi_contain_sign_or_spaces(str[i], &sign))
				continue ;
		if (str[i] < '0' || str[i] > '9')
			break ;
		if ((str[i] >= '0') && (str[i] <= '9'))
		{
			result = result * 10 + str[i] - '0';
			count += result == 0 ? 0 : 1;
		}
	}
	if (count > 18)
		result = sign == -1 ? 0 : -1;
	return (result * (sign == -1 ? sign : 1));
}
