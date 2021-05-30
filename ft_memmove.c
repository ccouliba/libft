/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 18:53:31 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/05 18:53:36 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*a_dest;
	unsigned char	*a_src;

	a_dest = (unsigned char*)dest;
	a_src = (unsigned char*)src;
	if (src < dest)
	{
		while (n != 0)
		{
			a_dest[n - 1] = a_src[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
