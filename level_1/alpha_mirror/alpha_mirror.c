#include<unistd.h>

int main(int args ,char **argv)
{
	int i = 0;
	if(args == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				argv[1][i] = 'z' + 'a' - argv[1][i];
			}
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				argv[1][i] = 'Z' + 'A' - argv[1][i];
			}
			write(1,&argv[1][i],1);
			i++;

		}

	}
	write(1,"\n",1);
}