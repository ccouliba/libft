/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 18:42:25 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/05 18:42:28 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*a_dest;
	const unsigned char	*b_src;

	a_dest = (unsigned char*)dest;
	b_src = (const unsigned char*)src;
	i = -1;
	while (++i < n)
	{
		a_dest[i] = b_src[i];
		if (a_dest[i] == (unsigned char)c)
			return ((void*)(dest + i + 1));
	}
	return (0);
}
