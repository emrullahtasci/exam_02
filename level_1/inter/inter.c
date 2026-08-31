#include<unistd.h>
int check(char *str,int k)
{
	int geriye_bak = 0;
	while(geriye_bak < k)
	{
		if(str[geriye_bak] == str[k])
		{
			return(1);
		}
		geriye_bak++;
	}
	return(0);
}
int main(int args, char **argv)
{
	if(args == 3)
	{
		int i = 0;
		int j;
		while(argv[1][i])
		{
			j = 0;
			while(argv[2][j])
			{
				if(argv[1][i] == argv[2][j] && check(argv[1],i) == 0)
				{
					write(1,&argv[1][i],1);
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1,"\n",1);
	return(0);
}