#include <stdlib.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
    int i =-1;
    while(++i < n && s2[i])
        s1[i] = s2[i];
    s1[i] = '\0';
    return 0;
}

char **ft_split(char *str)
{
    char **words;
    int wc = 0;
    int i =0, j =0, k;

    while(str[i])
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        
        {
            wc++;
            while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
                i++;
        }   
        else
            i++;
    }

    words = (char **)malloc(sizeof(char*) * (wc +1));
    if(!words)
        return NULL;
    i =0;
    j = 0;
    while (str[i])
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            {
                i++;
                k++;
            }
            words[j] =(char *)malloc(sizeof(char) * k +1);
            if(words[j])
                return NULL;
                ft_strncpy(words[j], &str[i - k], k);
                words[j][k] ='\0';
                j++;
        }
        else
            i++;
    }
    words[j] = NULL;
    return words;
}
