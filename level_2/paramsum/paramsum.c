#include<unistd.h>
void ft_putnbr(int nb)
{
    if(nb > 9)
    {
        ft_putnbr(nb / 10);
    }
    char c = nb % 10 + '0';
    write(1,&c,1);

}
int main(int args,char **argv)
{
    (void)argv;
    int i = 1;
    
        ft_putnbr(args - 1);
        write(1,"\n",1);
        i++;

    
    
}