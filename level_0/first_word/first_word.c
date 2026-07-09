#include<unistd.h>
int main(int args , char **argv)
{
	if(args == 2)
	{
		int i = 0;
		while (argv[1][i])
		{
			while(argv[1][i] && argv[1][i] <= 32 )
			{
				i++;
			}
			while(argv[1][i] && argv[1][i] > 32)
			{
				write(1,&argv[1][i],1);
				i++;
			}
			break;
		}
	}
	
}


