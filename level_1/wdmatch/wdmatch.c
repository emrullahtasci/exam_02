#include<unistd.h>

void putstr (char *s)
{
	int i = 0;
	while(s[i])
	{
		write(1,&s[i],1);
		i++;
	}

}
int main(int args, char **argv)
{
	if(args == 3)
	{
		int i = 0;
		int j = 0;
		while(argv[2][j])
		{
			if(argv[2][j] == argv[1][i])
			{
				i++;
			}
			if(argv[1][i] == '\0')
				break;
			j++;



		}
		if(argv[1][i] == '\0')
			putstr(argv[1]);

	}
	write(1,"\n",1);
}