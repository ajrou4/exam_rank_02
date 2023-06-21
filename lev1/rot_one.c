#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void    rot_one(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'y')
            str[i] += 1;
        else if (str[i] >= 'A' && str[i] <= 'Y')
            str[i] += 1;
        else if(str[i]== 'Z')
            ft_putchar('A');
        else if(str[i]== 'z')
            ft_putchar('a');       
        write(1, &str[i], 1);
        i++;
    }   
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        rot_one(av[1]);
    }
    write(1, "\n", 1);
}