#include<stdlib.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;

	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
			{
				return(i);
			}
			j++;

		}
		i++;
	}
	return(i);

}
#include<stdio.h>
int main()
{
	const char *s1 = "42Kocaeli";
    const char *reject1 = "ğaeieu";
	printf("--- Test 1 ---\n");
    printf("Orijinal strcspn : %zu\n", ft_strcspn(s1, reject1));
    printf("Senin ft_strcspn : %zu\n\n", ft_strcspn(s1, reject1));

}