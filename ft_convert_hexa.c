/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:20:26 by aschmitt          #+#    #+#             */
/*   Updated: 2023/10/18 23:20:26 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_hexa_min(unsigned int nb)
{
	if (nb >= 16)
		return (ft_hexa_min(nb / 16) + ft_hexa_min(nb % 16));
	if (nb >= 10)
		return (ft_putchar((nb % 10) + 'a'));
	else
		return (ft_putchar(nb + '0'));
}

size_t	ft_hexa_cap(unsigned int nb)
{
	if (nb >= 16)
		return (ft_hexa_cap(nb / 16) + ft_hexa_cap(nb % 16));
	if (nb >= 10)
		return (ft_putchar((nb % 10) + 'A'));
	else
		return (ft_putchar(nb + '0'));
}

size_t	ft_hexa_long(unsigned long nb)
{
	if (nb >= 16)
		return (ft_hexa_long(nb / 16) + ft_hexa_long(nb % 16));
	if (nb >= 10)
		return (ft_putchar((nb % 10) + 'a'));
	else
		return (ft_putchar(nb + '0'));
}

size_t	ft_puthexa(void *x)
{
	uintptr_t	addr; /// ATTENTION !!!  IMPOSSIBLE DE CAST DONC UTILISE uintptr_t

	addr = (uintptr_t)x; 
	write(1, "0x", 2);
	return (2 + ft_hexa_long(addr));
}
