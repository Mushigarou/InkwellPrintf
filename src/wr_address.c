#include "../include/ft_printf.h"

/*printing the needed format 'X', 'x', 'p'&& reverse the string*/
// static	char *wr_add(char *res, size_t i)
// {
// 	res[i] = 'x';
// 	res[++i] = '0';
// 	res[++i] = '\0';
// 	while (i-- >= 0 && res[i] != '\0')
// 		ft_putchar_fd(res[i], STDOUT);
// 	return (res);
// }
void conv_hex_long(unsigned long x, int *len, int sp)
{
    char *str;
    if (sp == 'x')
        str = "0123456789abcdef";
    else
        str = "0123456789ABCDEF";
    if (x > 15)
        conv_hex_long(x / 16 , len, sp);
    *len += ft_putchar_fd(str[x % 16], 1);
}
/*converting numbers from decimal to hexadecimal*/
long	long wr_address(unsigned long x)
{
	int len;
	
	len = 0;
	len += ft_putstr_fd("0x", 1);
	conv_hex_long(x, &len, 'x');
	return len;
}
