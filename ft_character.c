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

int	ft_isalpha(int chr)
{
	return ((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z'));
}

int	ft_isdigit(int dig)
{
	return (dig >= '0' && dig <= '9');
}

int	ft_isalnum(int alnum)
{
	return (ft_isalpha(alnum) || ft_isdigit(alnum));
}

int	ft_isascii(int ascii)
{
	return (ascii >= 0 && ascii <= 127);
}

int	ft_isprint(int print)
{
	return (print >= 32 && print <= 126);
}
