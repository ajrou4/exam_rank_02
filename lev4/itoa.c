#include<stdlib.h>

int cheack(int nbr)
{
    if(!nbr)
        return 0;
    if(nbr < 0)
        return -nbr;
    return nbr;
}

int ft_len(int nbr)
{
    int len = 0;
    if(nbr <= 0)
        len++;
    while(nbr != 0)
    {
        len++;
        nbr = nbr /10;
    }
    return len;
}
char	*ft_itoa(int n)
{
    int i = ft_len(n);
    char *str;
    str = (char *)malloc(sizeof(char)*(i+1));
    if(!str)
        return NULL;
    str[i] = '\0';
    if(n < 0)
        str[0] = '-';
    if(n == 0)
        str[0] ='0';
    while(n != 0)
    {
        str[i] =cheack(n % 10) + 48;
        n/10;
    }
    return str;

}