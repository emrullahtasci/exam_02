int max(int* tab, unsigned int len)
{

	if(tab == 0 || len == 0)
	{
		return(0);

	}
	unsigned int i  = 1;
	int en_büyük = tab[0];
	while(i < len )
	{
		if(tab[i] > en_büyük)
			en_büyük = tab[i];
		i++;

	}
	return(en_büyük);

}
#include <stdio.h> // printf kullanabilmek için ekledik

// Yazdığın max fonksiyonunun prototipi (derleyici tanısın diye)
int max(int* tab, unsigned int len);

int main(void)
{
    // Test 1: Normal karışık dizi
    int dizi1[] = {2, 8, -5, 42, 13, 0};
    unsigned int len1 = 6;
    printf("%d\n", max(dizi1, len1));
}
