int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while(s1[i] &&  s2[i] && s1[i] == s2[i] )
	{
		i++;
	}
	return(s1[1] - s2[2]);
}
#include<stdio.h>
int main()
{
	char a[]= "emre";
	char b[] = "emir";
	int c = ft_strcmp(a,b);
	printf("%d",c);

}