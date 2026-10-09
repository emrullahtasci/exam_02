#include <unistd.h>
#include <stdlib.h>

char	**ft_split(char *str)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	res = (char **)malloc(sizeof(char *) * 1000);
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] == '\0')
			break ;
		res[j] = (char *)malloc(1000);
		k = 0;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			res[j][k] = str[i];
			i++;
			k++;
		}
		res[j][k] = '\0';
		j++;
	}
	res[j] = NULL;
	return (res);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	**words;
	int		i;

	if (argc >= 2)
	{
		words = ft_split(argv[1]);
		if (words[0])
		{
			i = 1;
			while (words[i])
			{
				ft_putstr(words[i]);
				write(1, " ", 1);
				i++;
			}
			ft_putstr(words[0]);
		}
	}
	write(1, "\n", 1);
	return (0);
}