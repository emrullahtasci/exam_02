#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int main(int args, char **argv)
{
	if(args == 4)
	{
		int i = 0;
		int sayi1 = atoi(argv[1]);
		int sayi2 = atoi(argv[3]);

		if(argv[2][i] == '+')
			printf("%d", sayi1 + sayi2);
		else if ( argv[2][i] == '-')
			printf("%d",sayi1 - sayi2);
		else if ( argv[2][i] == '*')
			printf("%d",sayi1 * sayi2);
		else if ( argv[2][i] == '/')
		{	if(sayi2 != 0)
				printf("%d",sayi1 / sayi2);
		}
		else if ( argv[2][i] == '%')
			if(sayi2 != 0)
				printf("%d",sayi1 % sayi2);



	}
	write(1,"\n",1);
}