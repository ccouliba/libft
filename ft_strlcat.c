/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:16:03 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/06 15:16:14 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	t_d;
	size_t	t_s;

	t_d = ft_strlen(dest);
	t_s = ft_strlen(src);
	if (t_d > size)
		t_d = size;
	if (t_d == size)
		return (size + t_s);
	i = t_d;
	while (*src && i < (size - 1))
		dest[i++] = *(src++);
	if (size != 0)
		dest[i] = '\0';
	return (t_d + t_s);
}
