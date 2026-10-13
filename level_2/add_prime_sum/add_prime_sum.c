
#include<unistd.h>
#include<stdlib.h>
int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0 ;

    while(str[i] == ' ' || (str[i] == 9 || str[i] == 13))
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
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return(sign * res);

}

void ft_putnbr(int nb)
{
    if(nb > 9)
    {
        ft_putnbr(nb / 10);

    }
    char c = nb % 10 + '0';
    write(1,&c,1);
}

int is_prime(int n)
{
    
    if(n < 2)
    {
        return(0);
    }
    int i = 2;
    while(i < n)
    {
        if(n % i == 0)
        {
            return(0);
        }
        i++;
        

        
    }
    return(1);
}
int main(int args, char **argv)
{
    if(args == 2)
    {
        int i = 2;
        int toplam = 0;
        int sayi = ft_atoi(argv[1]);

        
        if(sayi > 0)
        {
            while(sayi >= i)
            {
                if(is_prime(i))
                {
                    toplam = toplam + i;
                }
                i++;
            }
            ft_putnbr(toplam);
            write(1,"\n",1);
            return(0);
        }
    }
    write(1, "0\n", 2);

}