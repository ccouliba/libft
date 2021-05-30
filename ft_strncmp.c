/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:18:59 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/06 15:19:43 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a_s1;
	unsigned char	*a_s2;

	a_s1 = (unsigned char*)s1;
	a_s2 = (unsigned char*)s2;
	i = 0;
	while (a_s1[i] && a_s2[i] && a_s1[i] == a_s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (a_s1[i] - a_s2[i]);
}
