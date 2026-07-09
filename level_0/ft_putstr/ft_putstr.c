#include<unistd.h>
void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}

}
#include<stdio.h>
int main()
{
	char str[] = "     wert";
	ft_putstr(str);
}