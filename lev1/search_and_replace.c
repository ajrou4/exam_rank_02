#include <unistd.h>

void search_and_place(char *str, char a, char b)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == a)
            str[i] = b;
        write(1, &str[i], 1);
        i++;
    }
}
int main(int ac, char **av)
{
    // int i = 0;
    if(ac == 4 &&(!av[2][1] && !av[3][1] ))
    {
        search_and_place(av[1], av[2][0], av[3][0]);
    }
    write(1, "\n", 1);
}