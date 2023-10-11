/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:57:02 by aschmitt          #+#    #+#             */
/*   Updated: 2023/10/11 13:57:02 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
size_t	ft_putchar(const char c);
size_t	ft_putstr(const char *str);
size_t  ft_strlen(const char *s);
size_t	ft_putnbr(int nb);
size_t	ft_hexa_min(unsigned int nb);
size_t	ft_hexa_cap(unsigned int nb);

#endif