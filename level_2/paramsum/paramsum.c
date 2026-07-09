#include<unistd.h>
void putnbr(int nb)
{
	if(nb > 9)
	{
		putnbr(nb / 10);

	}
	char c = nb % 10 + '0';
	write(1,&c,1);
}
int main(int args, char **argv)
{
	int a = args -1 ;

	putnbr(a);
	write(1,"\n",1);


}

