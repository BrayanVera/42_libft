/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvera <bvera@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:51:05 by bvera             #+#    #+#             */
/*   Updated: 2024/09/21 22:06:49 by bvera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num_bytes)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				aux;

	p1 = (const unsigned char *)ptr1;
	p2 = (const unsigned char *)ptr2;
	aux = 0;
	while (aux < num_bytes)
	{
		if (p1[aux] != p2[aux])
			return (p1[aux] - p2[aux]);
		aux++;
	}
	return (0);
}