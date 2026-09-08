#include<stdlib.h>

int     *ft_rrange(int start, int end)
{
    int *res;
    int i = 0;
    int len;

    if(start <= end)
    {
        len = (end - start) + 1;
    }
    else
    {
        len = (start - end) + 1;
    }
    res = malloc(sizeof(int) * len);
    if(res == NULL)
    {
        return(NULL);
    }
    if(start <= end)
    {
        while(start <= end)
        {
            res[i] = end;
            end--;
            i++;
        }
    }
    else
    {
        while(end <= start)
        {
            res[i] = end;
            end++;
            i++;
        }
    }
    return(res);
}