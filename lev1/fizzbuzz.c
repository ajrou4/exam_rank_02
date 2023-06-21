#include <unistd.h>
void ft_putnumber(int nbr)
{
    char c;
    if(nbr < 0)
    {
        write(1, "-", 1);
        nbr = -nbr;
    }
    else if (nbr > 9)
    {
        ft_putnumber(nbr / 10);
        ft_putnumber(nbr % 10);
    }
    else
    {
        c = nbr + '0';
        write(1, &c, 1);
    }
}

int main()
{
    int a = 1;
    while( a <= 100)
    {
        if(a % 5 == 0 && a % 3 == 0)
            write(1, "fizzbuzz", 8);
        else if(a % 3 == 0)
            write(1, "fizz", 4);
        else if(a % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_putnumber(a);
        write(1, "\n",1);
        a++;
    }
    return 0;
}
    

