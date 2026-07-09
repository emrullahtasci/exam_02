#include <unistd.h>

void ft_putnbr(int nb)
{
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
    }
    char c = (nb % 10) + '0';
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if (str[i] == '-')
    { // SÜSLÜ PARANTEZ ŞART!
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') // '13' YERİNE '9' YAPILDI
    {
        res = res * 10 + (str[i] - '0');
        i++; // Bunu da eklemeyi unutma ki atoi sonsuz döngüye girmesin!
    }
    return (res * sign);
}

int main(int args, char **argv)
{
    if (args == 2)
    {
        int i = 1; // Çarpım tablosu 1'den başlar, 0'dan değil knk!
        int a = ft_atoi(argv[1]);
        int c;

        while (i <= 9) // Döngü şartı düzeltildi
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(a);
            write(1, " = ", 3);
            c = i * a;
            ft_putnbr(c);
            write(1, "\n", 1);
            i++;
        }
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);
}