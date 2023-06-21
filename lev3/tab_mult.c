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

void    ft_putnbr(int nbr)
{
    char c;
    if(nbr < 0)
    {
        write(1, "-", 1);
        nbr = -nbr;
    }
    else if(nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
    {
        c = nbr + 48;
        write(1, &c, 1);
    }
}

int main(int ac, char **av)
{
    int num;
    int i;

    i =1;
    num = ft_atoi(av[1]);
    if(ac == 2)
    {
        while(i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(num);
            write(1, "= ", 2);
            ft_putnbr(i * num);
            write(1, "\n", 1);
            i++;
        }
    }
}