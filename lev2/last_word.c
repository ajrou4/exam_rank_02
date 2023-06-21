#include <unistd.h>

void    last_word(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    i-= 1;
    while (str[i] == ' ' || str[i] == '\t')
        i--;
    while((str[i] != ' ' && str[i] != '\t') && i >= 0)
        i--;
    i+=1;
    while(str[i] && (str[i] != ' ' && str[i] != '\t'))
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        last_word(av[1]);
    write(1, "\n", 1);
}