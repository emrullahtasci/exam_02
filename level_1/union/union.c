#include <unistd.h>

int	main(int argc, char **argv)
{
	int				seen[256] = {0};
	int				i;
	int				j;
	unsigned char	c;

	if (argc == 3)
	{
		i = 1;
		while (i <= 2)
		{
			j = 0;
			while (argv[i][j])
			{
				c = argv[i][j];
				if (seen[c] == 0)
				{
					write(1, &c, 1);
					seen[c] = 1;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}