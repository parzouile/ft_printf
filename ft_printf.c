/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmitt <aschmitt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:47:01 by aschmitt          #+#    #+#             */
/*   Updated: 2023/10/09 16:47:01 by aschmitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_aux(const char *str, size_t i, va_list *res)
{
	if (str[i + 1] == 'c')
		return (ft_putchar((char) va_arg(*res, int)));
	else if (str[i + 1] == 's')
		return (ft_putstr((char *) va_arg(*res, const char *)));
	/*else if (str[i + 1] == 'p')
		return (  );
	else if (str[i + 1] == 'd')
		return (  );
	else if (str[i + 1] == 'i')
		return (  );
	else if (str[i + 1] == 'u')
		return (  );
	else if (str[i + 1] == 'x')
		return (  );
	else if (str[i + 1] == 'X')
		return (  );
	else if (str[i + 1] == '%')
		return (  );*/
	else
		return (ft_putchar(str[i + 1]));
	
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	size_t	n;
	size_t	pb;
	va_list	res;

	if (!str)
		return (-1);
	va_start(res, str);
	n = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			pb = ft_put_aux(str, i, &res);
			i ++;
		}
		else
			pb = ft_putchar(str[i]);
		if (pb >= 0 )
			n += pb;
		///else
			/// probleme
		i ++;
	}
	va_end(res);
	return (n);
}

int main()
{
	printf("\n%d",  ft_printf("je %s %c %s", "la ", 'b'));
}