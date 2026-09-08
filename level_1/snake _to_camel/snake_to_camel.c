#include<unistd.h>
int main(int args,char **argv)
{
	int buyuk_yap = 0;
	if(args == 2)
	{
		int i = 0;
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == '_')
			{
				buyuk_yap = 1;

				

			}
			else
			{
				if(buyuk_yap == 1)
				{
					char c = argv[1][i] - 32;
					write(1,&c,1);
					buyuk_yap = 0;
				}
				else
				{
					write(1,&argv[1][i],1);

				}

			}
			
			i++;

		}
	}
	write(1,"\n",1);

}