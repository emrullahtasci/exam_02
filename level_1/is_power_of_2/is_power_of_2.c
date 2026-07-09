int is_power_of_2(unsigned int n)
{
	if(n == 0)
	{
		return(0);
	}

	while(n % 2 == 0)
	{
		n =  n / 2 ;





	}
	if( n == 1)
	{
		return (1);

	}
	else
		return (0);
}
#include <stdio.h> // printf kullanabilmek için ekledik

// Yazdığın fonksiyonun prototipi (main fonksiyonu tanısın diye)
int is_power_of_2(unsigned int n);

int main(void)
{
    // Test 1: 2'nin üssü olan normal bir sayı (2^3 = 8) -> Beklenen: 1
    printf("Test 1 (Sayı 8)   -> Sonuç: %d (Beklenen: 1)\n", is_power_of_2(8));

    // Test 2: 2'nin üssü olan büyük bir sayı (2^6 = 64) -> Beklenen: 1
    printf("Test 2 (Sayı 64)  -> Sonuç: %d (Beklenen: 1)\n", is_power_of_2(64));

    // Test 3: Çift ama 2'nin üssü olmayan sayı -> Beklenen: 0
    printf("Test 3 (Sayı 12)  -> Sonuç: %d (Beklenen: 0)\n", is_power_of_2(12));

    // Test 4: Tek ve 2'nin üssü olmayan sayı -> Beklenen: 0
    printf("Test 4 (Sayı 7)   -> Sonuç: %d (Beklenen: 0)\n", is_power_of_2(7));

    // Test 5: Sınır durum 1 (2^0 = 1 olduğundan üssüdür) -> Beklenen: 1
    printf("Test 5 (Sayı 1)   -> Sonuç: %d (Beklenen: 1)\n", is_power_of_2(1));

    // Test 6: Sınır durum 0 (2'nin hiçbir üssü 0 yapmaz) -> Beklenen: 0
    printf("Test 6 (Sayı 0)   -> Sonuç: %d (Beklenen: 0)\n", is_power_of_2(0));

    return (0);
}