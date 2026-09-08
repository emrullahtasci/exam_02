#include<stdlib.h>
int     *ft_range(int start, int end)
{
    int len ;
    int i =0;
    int  *res= 0;
    if(start <= end)
    {
        len = (end - start) + 1; 
    }
    else if (end <= start)
    {
        len = (start - end) + 1;
        
    }

    res = malloc(sizeof(int ) * len + 1);
    if(res == NULL)
    {
        return(NULL);
    }
    if(start <= end)
    {
        while(start <= end)
        {
            res[i] = start;
            start++;
            i++;
        }
    }
    else
    {
        while(start >= end)
        {
            res[i] = start;
            start--;
            i++;
        }
    }
    return(res);
}
    

#include<stdio.h>
 
int main(void)
{
    int *a = ft_range(1, 3); 
    int i = 0;

    while (i < 3)
        printf("%d ", a[i++]); 

    return (0);
}