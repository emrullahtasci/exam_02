void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
#include<stdio.h>
int main()
{
	char a[] = "selam";
	char b[] = "naber";
	ft_swap(a,b);
	printf("%s,%s",a ,b);
}