#include <unistd.h>

int	main(int args, char **argv)
{
	int i = 0;
	int k;
	int j;

	if (args == 3)
	{
		while (argv[1][i])
		{
			// 1. KONTROL: Bu harf argv[1] içinde daha önce çıktı mı?
			k = 0;
			while (k < i)
			{
				if (argv[1][k] == argv[1][i])
					break ;
				k++;
			}

			// Eğer harf benzersizse (k == i), argv[2] içinde arıyoruz
			if (k == i)
			{
				j = 0;
				while (argv[2][j])
				{
					if (argv[2][j] == argv[1][i])
					{
						write(1, &argv[1][i], 1);
						break ;
					}
					j++;
				}
			}
			i++; // Sayacı SADECE burada, 1 kez artırıyoruz!
		}
	}
	write(1, "\n", 1);
	return (0);
}