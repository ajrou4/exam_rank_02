#include <unistd.h>

int ft_putnbr(int nbr)
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
    return nbr;
}

int main(int ac, char **av)
{
    (void)av;
    if (ac >= 2)
    {
        ft_putnbr(ac -1);
    }
    write(1, "\n", 1);
}
