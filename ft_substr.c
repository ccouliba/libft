/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:21:27 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/06 15:21:51 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!s || !(sub = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
	{
		sub[0] = 0;
		return (sub);
	}
	while (s[start] && i != len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
