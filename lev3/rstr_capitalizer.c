#include<unistd.h>
int space_end(char c)
{
    return(c == ' ' || c == '\t' || c =='\0');
}

void rstr_capitazer(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] +=32;
        else if(str[i] >= 'a' && str[i] <= 'z' && space_end(str[i+1]))
            str[i] -=32;
        write(1, &str[i++], 1);
    }

}
int main(int ac, char **av)
{
    int i;
    if(ac < 1)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < ac)
        {
           rstr_capitazer(av[i]);
           write(1, "\n", 1);
            i += 1;
        }
    }
}