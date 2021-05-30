/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 18:34:18 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/06 15:42:32 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a_s1;
	unsigned char	*a_s2;
	size_t			i;

	a_s1 = (unsigned char*)s1;
	a_s2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (*a_s1 == *a_s2 && (i < (n - 1)))
	{
		a_s1++;
		a_s2++;
		i++;
	}
	return ((int)(*a_s1 - *a_s2));
}
