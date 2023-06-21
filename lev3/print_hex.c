#include <unistd.h>
int	ft_atoi(const char *str)
{
    int res=0;
    int sing = 1;
    int i = 0;
    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sing = -1;
        i++;
    }
    while(str[i])
    {
        res = res *10 + str[i] - 48;
        i++;
    }
    return(sing * res);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_puthex(int n)
{
    if(n > 16)
    {
        ft_puthex(n / 16);
        ft_puthex(n % 16);
    }
    else if(n <= 9)
        ft_putchar(n + 48);
    else if(n >= 10 && n <= 16)
    {
        ft_putchar(n - 10 + 'a');
    }
}

int main(int ac, char **av)
{
    // int n_av = ft_atoi(av[1]);
    if(ac == 2)
    {
        ft_puthex(ft_atoi(av[1]));
    }
    ft_putchar('\n');
    return 0;
}