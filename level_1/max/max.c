int		max(int* tab, unsigned int len)
{
	unsigned int i = 1;
	int max = tab[0];
	if(len == 0)
	{
		return(0);
	}
	while(i  < len)
	{
		if(tab[i] > max)
		{
			max = tab[i];

		}
		i++;



	}
	return(max);
}
#include <stdio.h>

// max fonksiyonunun prototipi (Derleyici önceden bilsin diye)
int    max(int *tab, unsigned int len);

int main(void)
{
    // Doğru dizi tanımlaması (Süslü parantez '{}' kullanılır)
    int tab[] = {1, 2, 34, 88};

    // Dizide toplam 4 eleman var, o yüzden uzunluğu direkt 4 olarak gönderiyoruz
    int secim = max(tab, 4);

    printf("En büyük sayı: %d\n", secim);

    return (0);
}