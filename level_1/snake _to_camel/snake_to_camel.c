#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		flag;
	char	c;

	i = 0;
	flag = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = argv[1][i];
			if (c == '_')
				flag = 1;
			else
			{
				if (flag == 1 && c >= 'a' && c <= 'z')
					c = c - 32;
				write(1, &c, 1);
				flag = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}