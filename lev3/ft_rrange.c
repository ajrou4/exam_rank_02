 #include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i;
    int len = (end - start) + 1;
    int  *range;

    if(start > end)
        return (ft_rrange(end,start));
    range = (int *)malloc(sizeof(int) * len);
    if(range)
    {
        while(i < len)
        {
            range[i] = end;
            end--;
            i++;
        }
    }
    return range;
}