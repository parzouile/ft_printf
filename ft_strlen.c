/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:55:18 by aschmitt          #+#    #+#             */
/*   Updated: 2023/10/10 22:55:18 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t  ft_strlen(const char *s)
{
        size_t  i;

        i = 0;
        while (s[i])
                i ++;
        return (i);
}