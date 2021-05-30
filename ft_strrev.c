/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <ccouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 13:38:50 by ccouliba          #+#    #+#             */
/*   Updated: 2021/03/18 16:17:52 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	c;

	j = ft_strlen(str) - 1;
	i = -1;
	while (++i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		j--;
	}
	return (str);
}