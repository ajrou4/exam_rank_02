#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void repat_alpha(char *str)
{
   int i = 0;
    int j = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            j = str[i] - 'a';
            while (j >= 0)
            {
                ft_putchar(str[i]);
                j--;
            }
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            j = str[i] - 'A';
            while (j >= 0)
            {
                ft_putchar(str[i]);
                j--;
            }
        }
        else
            ft_putchar(str[i]);
        str++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        repat_alpha(av[1]);
    }
    ft_putchar('\n');
}