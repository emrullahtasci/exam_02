#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	first_start;
	int	first_end;

	if (argc > 1)
	{
		i = 0;
		// 1. En baştaki boşlukları atla
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		
		// 2. İlk kelimenin sınırlarını kaydet
		first_start = i;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
			i++;
		first_end = i;

		// 3. Kalan diğer kelimeleri bul ve yazdır
		while (argv[1][i] != '\0')
		{
			// Kelimeler arasındaki boşlukları atla
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			
			if (argv[1][i] != '\0') // Eğer yeni bir kelime bulduysak
			{
				while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
				{
					write(1, &argv[1][i], 1);
					i++;
				}
				// Kelimeden sonra araya bir boşluk at
				write(1, " ", 1);
			}
		}

		// 4. En sona kaydettiğimiz ilk kelimeyi yazdır
		while (first_start < first_end)
		{
			write(1, &argv[1][first_start], 1);
			first_start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}