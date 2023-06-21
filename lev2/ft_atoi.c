int	ft_atoi(const char *str)
{
    int res=0;
    int sing = 1;
    int i = 0;
    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    while(str[i] == '-' || str[i] == ' +')
    {
        if(str[i] == "-")
            sing = -1;
        i++;
    }
    while(str[i])
    {
        res = res *10 + str[i] - 48;
        i++;
    }
    return(sing * res);
}