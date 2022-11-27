// if format specifier is > nbr of arguments, behaviour is undefined
// 

#include "../include/ft_printf.h"

int ft_printf(const char *p, ...)
{
    va_list     args;
    va_start(args, p);

    if (p == NULL)
        return (0);
    unsigned int i = 0;
    while (p[i] != '\0')
    {
       while(p[i] && p[i] != '%')
       {
            ft_putchar_fd(p[i], 1);
            i++;       
       }
       if(p[i] == '%' && p[i + 1] != '\0')
        {
            i++;
            if(p[i] == 's')
                ft_putstr_fd(va_arg(args, char *), 1);
            else if(p[i] == 'c')
                ft_putchar_fd(va_arg(args, int), 1);
            else
                ft_putchar_fd(p[i], 1);
        }
        i++;
    }
    va_end(args);
    return (ft_strlen(p));
}

int main()
{
    // char    *pt = "%s";

    ft_printf("%c", 'c',"gdilvv");
    // printf("%d\n", !(ft_strncmp(pt, "he%pllo", 3)));
}

