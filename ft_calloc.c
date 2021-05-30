/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:08:12 by ccouliba          #+#    #+#             */
/*   Updated: 2021/01/06 15:08:43 by ccouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *tab;

	if (!(tab = malloc(size * nmemb)))
		return (NULL);
	ft_memset(tab, 0, (size * nmemb));
	return (tab);
}
