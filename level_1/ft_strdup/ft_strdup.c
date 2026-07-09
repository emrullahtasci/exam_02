#include<stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}
char *ft_strdup(char *src)
{
	int len = ft_strlen(src);
	int i = 0;
	char *new_line ;

	new_line = malloc (sizeof(char) * (len + 1));
	if (new_line == NULL)
	return (NULL);
	while(src[i])
	{
		new_line[i] = src[i];
		i++;
	}
	new_line[i] = '\0';
    return (new_line);
}
#include <stdio.h>  // printf için
#include <stdlib.h> // malloc için

// Yazdığın fonksiyonun prototipi
char *ft_strdup(char *src);

int main(void)
{
    char *orijinal = "42Kocaeli";
    char *kopya;

    // Fonksiyonumuzu çağırıp orijinal string'i kopyalıyoruz
    kopya = ft_strdup(orijinal);

    // 1. Kontrol: Kopyalama başarılı oldu mu?
    printf("Orijinal Kelime: %s\n", orijinal);
    printf("Kopyalanan Kelime: %s\n\n", kopya);

    // 2. Kontrol: Hafıza adresleri farklı mı? (Farklı olması gerekir!)
    printf("Orijinalin RAM Adresi: %p\n", (void *)orijinal);
    printf("Kopyanın RAM Adresi:    %p\n", (void *)kopya);

    // Malloc ile yer ayırdığımız için işimiz bitince hafızayı özgür bırakıyoruz
    free(kopya);

    return (0);
}