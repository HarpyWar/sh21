/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemmeric <kemmeric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:42:27 by kemmeric          #+#    #+#             */
/*   Updated: 2018/11/28 20:30:45 by kemmeric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	itoa_req(long n, int i, char *s, int len)
{
	if (n / 10 <= 0)
	{
		s[len - i] = n + '0';
		return ;
	}
	itoa_req(n / 10, i + 1, s, len);
	s[len - i] = n % 10 + '0';
}

static int	intlen(long nb)
{
	int		len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb /= 10)
		len++;
	return (len + 1);
}

char		*ft_itoa(int n)
{
	char	*s;
	long	nb;
	int		i;
	int		len;

	nb = n;
	len = intlen(nb);
	s = ft_strnew(len);
	if (s == NULL)
		return (NULL);
	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		s[i++] = '-';
	}
	else
		len--;
	itoa_req(nb, i, s, len);
	return (s);
}
