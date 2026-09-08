#include<unistd.h>

void ft_putnbr(int n)
{
    if(n > 9)
    {
        ft_putnbr(n / 10);
    }
    char c = n % 10 + '0';
    write(1,&c,1);
}

int atio(char *str)
{
    int res = 0;
    int sign =1;
    int i = 0;

    while(str[i] == ' ' || str[i] == 9 && str[i] == 13)
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+' )
    {
        if(str[i] == '-')
        {
            sign = -1;
        }
        else
            i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return(res * sign);
    

}

int main(int args, char **argv)
{
    if(args == 2)
    {
        int i = 1;
        int c = 0;
        int sayi = atio(argv[1]);
        while(i <= 9)
        {
            ft_putnbr(i);
            write(1," x ",3);
            ft_putnbr(sayi );
            write(1," = ",3);
            c = sayi * i;
            
            ft_putnbr(c);
            
            write(1,"\n",1);
            i++;
        }
    }
    write(1,"\n",1);


}