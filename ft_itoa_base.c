/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <ccouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:24:46 by ccouliba          #+#    #+#             */
/*   Updated: 2021/03/18 16:17:36 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char *ft_itoa_base(long nbr, char *base)
{
	char	*res;
	int		size;
	int		i;

	i = 0;
	if (nbr == 0)
		return (ft_strdup("0"));
	size = ft_strlen(base);
	if (!(res = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (nbr != 0)
	{
		res[i++] = base[nbr % size];
		nbr /= size;
	}
	res[i] = '\0';
	return (ft_strrev(res));
}
