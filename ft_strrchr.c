/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:20:42 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/06 15:21:20 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	r;
	char	*a_s;

	a_s = (char*)s;
	r = ft_strlen(s);
	if (!(char)c)
		return (&a_s[r]);
	while (r--)
	{
		if (a_s[r] == c)
			return (&a_s[r]);
	}
	return (NULL);
}
