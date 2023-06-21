#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int a = atoi(av[1]);
    int b = atoi(av[2]);
    if(ac == 3)
    {
        if(a <= 0 || b <= 0)
        {
            printf("\n");
            return 0;
        }
        while(b != 0)
        {
            int tmp = b;
            b = a % b;
            a = tmp;
        }
        printf("%d\n", a);
        return 0;
    }
    else
    {
        printf("\n");
        return 0;
    }
}