#include<unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result = 0;
	int bits = 8;

	while(bits > 0)
	{
		result = result * 2 + (octet % 2);
		octet = octet / 2;
		bits--;
	}
	return(result);
}
int main()
{
	reverse_bits(1);
}