#include<stdlib.h>
#include<unistd.h>
char **split(char *str)
{
    int i = 0; 
    char **res;
    int j = 0;
    int k;

    res = (char **)malloc(sizeof(char *) * 1000);

    if(!res)
    {
        return(NULL);
    }

    while(str[i])
    {
        while(str[i] && str[i] <= 32 )
        {
            i++;
        }
        if(str[i] == '\0')
        {
            break;
        }
        k = 0;
        res[j]= malloc(sizeof(char) * 1000);
        while(str[i] && str[i] > 32)
        {
            res[j][k] = str[i];
            i++;
            k++;
        }
        res[j][k] = '\0';
        j++;
    }
    res[j] = NULL;
    return(res);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(int args, char **argv)
{
    char **word;
    int i = 0;

    if(args == 2)
    {
        word = split(argv[1]);
        while(word[i])
        {
            i++;
        }
        i--;
        while( i >= 0)
        {
            ft_putstr(word[i]);
            if(i > 0)
            {
                write(1," ",1);
            
            }
            i--;

        }
    }
    write(1,"\n",1);

}