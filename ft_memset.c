/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 18:58:30 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/05 18:58:33 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *a_s;

	a_s = (unsigned char*)s;
	while (n != 0)
	{
		*(a_s++) = (unsigned char)c;
		n--;
	}
	return (s);
}
