#include "../include/ft_printf.h"

int ft_printf(const char *fmt, ...)
{
    va_list         args;
    unsigned int    i;
    int             len;
    va_start(args, fmt);

    len = 0;
    i = 0;
    while (fmt[i] != '\0')
    {
       while(fmt[i] && fmt[i] != '%')
       {
            len += ft_putchar_fd(fmt[i], 1);
            i++;
       }
       if(fmt[i] == '%')
        {
            i++;
            if (fmt[i] == 's')
                len += ft_putstr_fd(va_arg(args, char *), STDOUT);
            else if (fmt[i] == 'c')
                len += ft_putchar_fd(va_arg(args, int), STDOUT);
            else if (fmt[i] == 'd' || fmt[i] == 'i')
                len += ft_putnbr_fd(va_arg(args, int), STDOUT);
            else if (fmt[i] == 'x' || fmt[i] == 'X' || fmt[i] == 'p')
               len += convert_to_hex(va_arg(args, unsigned long), fmt[i]);
            else if (fmt[i] == 'u')
               len += ft_putunbr_fd(va_arg(args, unsigned int), STDOUT);
            else
                len += ft_putchar_fd(fmt[i], STDOUT);
            i++;
        }
    }
    va_end(args);
    printf("\nlen = %d\n", len);
    return (len);
}

int main()
{
    // char    *pt = "Hey, below is an i.e of int";
    // void    *ptr;
    // unsigned int g = 4147483648;
    // int          x = 2147483647;
    // ft_printf(  "mine |\nchar        %%c: %c\nstr         %%s: %s\n\nunsigned    %%u: %u\ninteger     %%d: %d\n\naddress of  %%X: %X\naddress of  %%x: %x\nAdress void %%p: %p",'A', pt, g, x, &x, &x, &ptr);
    ft_printf("%s", NULL);
    // char    p[] = "hel545lo";
    // printf("%s", address_toupper(p));
}
