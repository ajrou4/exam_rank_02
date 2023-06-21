#include <stdio.h>
char    *ft_strrev(char *str)
{
    int i= 0;
    int len = 0;
    char temp;
    while(str[len])
        len++;
    len--;
    while(i < len)
    {
        temp = str[len];
        str[len] = str[i];
        str[i] = temp;
        i++;
        len--;
    }
    return(str);
}

int main()
{
    char a[] ="majrou";
    printf("%s\n", ft_strrev(a));
}