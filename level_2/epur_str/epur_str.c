#include<unistd.h>
int main(int args,char **argv)
{
	if(args == 2)
	{
		int i = 0;
		int flag = 0;

		while(argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i++;
		}
		while(argv[1][i])
		{
			if(argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				flag = 1;

			}
			else
			{
				if(flag == 1)
				{
					write(1," ",1);
					flag = 0;


				}
				write(1,&argv[1][i],1);


			}
			i++;
		}


	}
	write(1,"\n",1);
}