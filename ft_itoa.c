/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:10:48 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/06 15:11:19 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(long n)
{
	int size;

	if (n <= 0)
		size = 1;
	else
		size = 0;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	nb;

	nb = n;
	len = get_size(nb);
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res[len] = '\0';
	if (nb == 0)
		res[0] = '0';
	else if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	while (len-- && nb)
	{
		res[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (res);
}
