#include<unistd.h>
void putnbr(int nb)
{
	if(nb > 9)
	{
		nb = nb / 10;
	}
	char c = (nb % 10) + '0';
	write(1,&c,1);

}
int main(int args,char ** argv)
{
	int count = args - 1;
	putnbr(count);
	return(0);
}