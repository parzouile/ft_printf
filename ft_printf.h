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

#endif