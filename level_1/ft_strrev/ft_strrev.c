char    *ft_strrev(char *str)
{
	int i = 0;
	int len = 0;
	int tmp = 0;
	while(str[len])
	{
		len++;

	}
	len--;
	while(i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;

		i++;
		len--;
	}
	return(str);

}
#include<stdio.h>
int main()
{
	char s[] = "selam";
	printf("%s",ft_strrev(s));

}