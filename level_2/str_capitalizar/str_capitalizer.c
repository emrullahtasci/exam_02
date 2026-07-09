#include <unistd.h>

int main(int args, char **argv)
{
    // Eğer hiç argüman yoksa sadece \n basıp bitiriyoruz
    if (args < 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    int j = 1; // argv[0] program adıdır, argümanlar 1'den başlar knk
    while (j < args) // Gelen tüm argümanları tek tek geziyoruz
    {
        int i = 0; // Her yeni string'e geçtiğimizde harf sayacını sıfırlıyoruz

        while (argv[j][i]) // String'in sonuna kadar harf harf dönüyoruz
        {
            // Senin kurduğun ilk harf şartı: i == 0 veya bir önceki karakter boşluk/tab ise
            if (i == 0 || argv[j][i - 1] == ' ' || argv[j][i - 1] == '\t')
            {
                if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
                {
                    argv[j][i] = argv[j][i] - 32;
                }
            }
            else
            {

                if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
                {
                    argv[j][i] = argv[j][i] + 32;
                }
            }

            // Harfi anında ekrana basıyoruz
            write(1, &argv[j][i], 1);
            i++;
        }

        write(1, "\n", 1);
        j++;
    }
    return (0);
}