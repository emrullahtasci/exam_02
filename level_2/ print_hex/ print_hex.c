#include<unistd.h>
void ft_puthex(int nb)
{
    char *hex = "0123456789abcdef";
    if(nb >= 16)
    {
        ft_puthex(nb / 16);
    }
    write(1,&hex[nb % 16],1);
}
int atoi(char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
    {
        i++;
    }
    if(sign == '-' || sign == '+')
    {
        if(sign == '-')
        {
            sign = -1;
        }
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
        int sayi = atoi(argv[1]);
        ft_puthex(sayi);
       
    }
    write(1,"\n",1);
    
}