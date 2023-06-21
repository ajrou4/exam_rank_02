#include<unistd.h>
int ft_strlen(char *str)
{
    int i =0;
    while(str[i])
    {
        i++;
    }
    return i;
}
void    ft_putstr(char *str)
{
    int i =0;
    while (str[i])
    {
       write(1,&str[i], 1);
    }
    
}
void revers_words(char *str)
{
    int len = ft_strlen(str);
    if(len == 0)
    {
        write(1,"\n",1);
        return;
    }
    int start = 0;
    int end = len -1;
    while(start < end)
    {
        while(start < end && (str[start] == ' ' ||str[start] == '\t'))
            start++;
        while(start < end && (str[end] == ' ' ||str[end] == '\t'))
            end--;
        if(start < end)
        {
            char tmp = str[start];
            str[start] = str[end];
            str[end] = tmp;
        }
        start++;
        end--;
    }
    ft_putstr(str);

}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        revers_words(av[1]);
    }
    write(1, "\n", 1);
}