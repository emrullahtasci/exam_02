#include <stdlib.h>
#include<unistd.h>

int ft_atoi(char *str)
{
    int sign = 1;
    int res = 0;
    int i = 0;
    while(str[i] == ' ' || (str[i] == 0 || str[i] == 9))
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign = -1;
        }
            i++;
    }
    while(str[i] >= '0' &&  str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return(sign * res);
}

void ft_putnbr( int nb)
{
    if(nb > 9)
    {
        ft_putnbr(nb / 10);
        
    }
    char c = (nb % 10) + '0';
    write(1,&c,1);

}
int main(int args, char **argv)
{
    
    if(args == 2)
    {
        int i= 1;
        int sayi = ft_atoi(argv[1]);
        int c  = 0;
        while(i <= 9)
        {

            ft_putnbr(i);
            write(1," x ",3);
            ft_putnbr(sayi);
            write(1," = ",3);
            c = sayi * i;
            ft_putnbr(c);
        

        
            write(1,"\n",1);
            i++;
        }

    }
    else 
        write(1,"\n",1);
}