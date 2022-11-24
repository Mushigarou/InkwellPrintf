#include "../include/ft_printf.h"

int ft_printf(const char *p, ...)
{
    va_list my_lst;
    va_start(my_lst, p);

    char    *s;
    char    **print_type;
    size_t  i;
    size_t  j;
     
    i = 0;
    print_type = ft_split(p, '%');
    if (print_type == NULL)
        return (0);
    while (print_type[i])
    {
        j = 0;
        while (print_type[i][j])
        {
            if (print_type[i][j + 1] == (char)'s')
            {
                s = va_arg (my_lst, char *);
                ft_putstr_fd(s, 1);
            }
            j++;
        }
        i++;
    }
    // while (*p)
    // {
    //     if (*p == '%' && *(p + 1) == 's')
    //     {
    //         s = va_arg (my_lst, char *);
    //         ft_putstr_fd(s, 1);
    //     }
    //     p++;
    // }
    // printf("%zu", i = ft_strlen(s));
    return ((int)ft_strlen(p));    
}

int main()
{
   char *p = "testing";
   ft_printf(p, "Blabla");
}