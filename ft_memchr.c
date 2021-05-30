/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 18:27:50 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/05 18:27:58 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *a_s;

	a_s = (unsigned char*)s;
	while (n-- > 0)
	{
		if (*a_s == (unsigned char)c)
			return (a_s);
		a_s++;
	}
	return (NULL);
}
