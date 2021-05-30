/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <ccouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:15:05 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/31 11:27:18 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *a_s;

	a_s = (char*)s;
	while (*a_s && *a_s != c)
		a_s++;
	if (*a_s == c)
		return (a_s);
	return (NULL);
}
