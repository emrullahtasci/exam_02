#include<stdlib.h>
static int get_len(long n)
{
    int len = 0;
    if( n <= 0)
    {
        len++;
        n = -n;
    }
    while(n > 0)
    {
        n = n / 10;
        len++; 
    }
    return(len);


}
char	*ft_itoa(int nbr)
{
    char *str;
    long n ;
    int len ;
    n = nbr;
    len = get_len(n);
    str = (char *)malloc(sizeof(char) * len + 1);
    if(!str)
    {
        return(NULL);
    }
    str[len] = '\0';
    if(n == 0)
    {
        str[0] = '0';
    }
    if(n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    while(n > 0)
    {
        str[--len] = (n % 10) + '0';
        n = n / 10;
    }
    return(str);
}
#include<stdio.h>
int main()
{
    printf("%s",ft_itoa(12345));
}