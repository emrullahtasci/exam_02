#include<unistd.h>
int main(int args, char **argv)
{
	int i = 0;
	if(args == 4 && argv[2][1] == '\0' && argv[3][1]  == '\0')
	{
		while(argv[1][i])
		{
			if(argv[1][i] == argv[2][0] )
			{
				argv[1][i] = argv[3][0];

			}
			write(1,&argv[1][i],1);
			i++;

		}
	}
	write(1,"\n",1);
}