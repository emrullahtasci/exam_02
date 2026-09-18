
#include<stdlib.h>
#include <stdlib.h>

// 1. Karakterin ayırıcı olup olmadığını kontrol eden yardımcı fonksiyon
static int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

// 2. Metindeki toplam kelime sayısını hesaplayan fonksiyon
static int	count_words(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		// Boşlukları atla
		while (str[i] && is_space(str[i]))
			i++;
		// Eğer boşluktan sonra bir karakter varsa bu yeni bir kelimedir
		if (str[i])
		{
			count++;
			// Kelimenin sonuna kadar git
			while (str[i] && !is_space(str[i]))
				i++;
		}
	}
	return (count);
}

// 3. Bulunan kelimeyi yeni bir bellek alanına kopyalayan fonksiyon
static char	*word_dup(char *str)
{
	int		i;
	char	*word;

	i = 0;
	// Kelimenin uzunluğunu bul
	while (str[i] && !is_space(str[i]))
		i++;
	
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	
	i = 0;
	while (str[i] && !is_space(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

// 4. Ana ft_split fonksiyonu



char	**ft_split(char *str)
{
	char	**res;
	int		i;

	if (!str)
		return (NULL);
	
	// Kelime sayısı + 1 (NULL için) kadar pointer alanı ayırıyoruz
	res = malloc(sizeof(char *) * (count_words(str) + 1));
	if (!res)
		return (NULL);
	
	i = 0;
	while (*str)
	{
		while (*str && is_space(*str))
			str++;
		if (*str)
		{
			res[i] = word_dup(str);
			i++;
			while (*str && !is_space(*str))
				str++;
		}
	}
	res[i] = NULL; // İki boyutlu dizinin sonunu belirliyoruz
	return (res);
}
#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str);

int main(void)
{
    char **res = ft_split("  Que la   lumiere soit  ");
    int i = 0;

    while (res[i])
    {
        printf("[%s]\n", res[i]);
        free(res[i]);
        i++;
    }
    free(res);
    return (0);
}