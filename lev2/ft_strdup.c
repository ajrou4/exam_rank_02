int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}
char    *ft_strdup(char *src)
{
    char *s;
    int i;
    s = malloc(sizeof(char) * (ft_strlen(src)+1));
    if(s == ((void*)0))
        return ((void*)0);
    while (src[i])
    {
        s[i] = src[i];
        i++;
    }
    s[i] ='\0';
    return s;
}