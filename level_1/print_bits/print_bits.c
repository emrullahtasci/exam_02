#include<unistd.h>
void	print_bits(unsigned char octet)
{
	unsigned char result;
	int bits = 7;
	while(bits >= 0)
	{
		result = (octet >> bits & 1) + '0';
		write(1,&result,1);
		bits--;

	}
}
#include<stdio.h>
int main()
{
	print_bits(1);
}