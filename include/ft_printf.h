#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#ifndef STDOUT
# define STDOUT 1
#endif // STDOUT

# include "../libft/libft.h"
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *, ...);
unsigned	long convert_to_hex(unsigned long x, int sp);
int	ft_putunbr_fd(unsigned int n, int fd);

#endif // FT_PRINTF_H