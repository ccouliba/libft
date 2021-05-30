/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:15:30 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/06 15:15:55 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join;
	int		taille;

	if (!s1 || !s2)
		return (NULL);
	taille = ft_strlen(s1) + ft_strlen(s2);
	if (!(join = malloc(sizeof(char) * (taille + 1))))
		return (0);
	else
	{
		ft_memcpy(join, s1, ft_strlen(s1));
		ft_memcpy(join + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	}
	return (join);
}
