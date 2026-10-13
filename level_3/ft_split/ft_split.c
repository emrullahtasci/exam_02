#include<stdlib.h>
char    **ft_split(char *str)
{
    int i = 0;
    char **res ;
    int j = 0;
    int k;

    res = (char **)malloc(sizeof(char *)* 1000);
    if(!res)
    {
        return(NULL);
    }
    while(str[i] )
    {
        while(str[i] && str[i] <= 32)
        {
            i++;
        }
        if(str[i] == '\0')
        {
            break;
        }

        res[j] = malloc(sizeof(char) * 1000);
        k =0;
        while(str[i] && str[i] > 32)
        {
            res[j][k] = str[i];
            i++;
            k++;
        }
        res[j][k] = '\0';
        j++;


        
    }
    res[j] =  NULL;
    return(res);
}