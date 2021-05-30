/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:14:22 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/06 15:45:47 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**get_free(char **s)
{
	int i;

	i = 0;
	if (!*s || !s)
		return (NULL);
	while (s[i])
		free(s[i++]);
	free(s);
	return (NULL);
}

static int	get_n_word(char *s, char c)
{
	int m;

	m = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			m++;
			while (*s && *s != c)
				s++;
		}
	}
	return (m);
}

static char	*get_mem(char *s, char c)
{
	char	*dup;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(dup = malloc(sizeof(char) * (i + 1))))
	{
		free(dup);
		return (NULL);
	}
	else
		ft_memcpy(dup, (char*)s, (i + 1));
	dup[i] = '\0';
	return (dup);
}

char		**ft_split(char const *s, char c)
{
	char	**split;
	char	*a_s;
	int		i;

	if (!s)
		return (NULL);
	if (!(split = malloc(sizeof(char*) * (get_n_word((char*)s, c) + 1))))
		return (NULL);
	a_s = (char*)s;
	i = 0;
	while (*a_s)
	{
		while (*a_s && *a_s == c)
			a_s++;
		if (*a_s && *a_s != c)
		{
			if (!(split[i] = get_mem(a_s, c)))
				return (get_free(split));
			i++;
			while (*a_s && *a_s != c)
				a_s++;
		}
	}
	split[i] = 0;
	return (split);
}
