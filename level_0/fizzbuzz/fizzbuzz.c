#include<unistd.h>

ft_putbnr(int nb)
{
	if(nb > 9)
	{
		ft_putbnr(nb / 10);


	}
	char c = (nb % 10 ) + '0';
	write(1,&c,1);
}

int main()
{
	int nb = 1;
	while( nb <=100)
	{
		int i = 1;
		if(nb % 15 == 0)
		{
			write(1,"fizzbuzz",8);
		}
		else if( nb % 3 == 0)
		{
			write(1,"fizz",4);
		}
		else if (nb % 5 == 0)
		{
			write(1,"bazz",4);
		}
		else
		{
			ft_putbnr(nb);



		}
		write(1,"\n",1);
		nb++;


	}
}