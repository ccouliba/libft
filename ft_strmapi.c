/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:17:58 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/06 15:18:47 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*a_s;

	if (!s || !(a_s = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (*s)
		a_s[i++] = *(s++);
	a_s[i] = '\0';
	i = 0;
	while (a_s[i])
	{
		a_s[i] = (*f)(i, a_s[i]);
		i++;
	}
	a_s[i] = '\0';
	return (a_s);
}
