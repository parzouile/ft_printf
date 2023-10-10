/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:45:35 by aschmitt          #+#    #+#             */
/*   Updated: 2023/10/10 22:45:35 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putchar(const char c)
{
	return (write(1, &c, 1));
}

size_t	ft_putstr(const char *str)
{
	return (write(1, str, ft_strlen(str)));
}
