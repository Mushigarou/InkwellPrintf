#include "../include/ft_printf.h"

static	char *wr_address(char *res, size_t i, int sp)
{
	res[i] = 'x';
	res[++i] = '0';
	i = ft_strlen(res);
	res[i] = '\0';
	if (sp == 'X')
		while (--i >= 0 && res[i] != '\0')
			ft_putchar_fd(ft_toupper(res[i]), 1);
	else
		while (--i >= 0 && res[i] != '\0')
			ft_putchar_fd(res[i], 1);
	return (res);
}

unsigned	long convert_to_hex(unsigned long x, int sp)
{
	size_t			i;
	char			res[16];
	long long		tmp;
	unsigned long	len;

	tmp = 0;
	i = 0;
	len = 0;
	while (x != 0)
	{
		tmp = x % 16;
		if (tmp <= 9)
			res[i++] = tmp + 48;
		else if (tmp >= 10)
			res[i++] = tmp + 87;
		x = x / 16;
		len++;
	}
	wr_address(res, i, sp);
	return (len + 2);
}
