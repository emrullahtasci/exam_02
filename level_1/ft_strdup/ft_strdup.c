#include<stdlib.h>
char    *ft_strdup(char *src)
{
	int i = 0;
	char *res;
	int len = 0;
	while(len[src])
	{
		len++;
	}
	res =malloc(sizeof(char) * (len + 1));
	if(res == NULL)
	{
		return(NULL);
	}
	while(src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i]= '\0';
	return(res);
}
#include<stdio.h>
int main()
{
    char s[] = "emre";

    // char d[] değil, char *d olmalı. Kopyalanacak kelime de 's'
    char *d = ft_strdup(s);

    printf("%s\n", d);

    // İşimiz bitince ayırdığımız hafızayı iade ediyoruz
    free(d);

    return (0); // main fonksiyonunu kapatmayı unutmuyoruz
}