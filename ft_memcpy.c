/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 18:48:10 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/05 18:48:14 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*a_dest;
	const unsigned char	*a_src;

	a_dest = (unsigned char*)dest;
	a_src = (const unsigned char*)src;
	if ((n == 0) || dest == src)
		return (dest);
	while (n != 0)
	{
		*(a_dest++) = *(a_src++);
		n--;
	}
	return (dest);
}
