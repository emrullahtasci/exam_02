#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;


void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *cur;
    t_list *prev;
    t_list *temp;

    if(begin_list == 0  || *begin_list == 0)
    {
        return;

    }
    cur = *begin_list;
    prev = 0;

    while(cur != 0)
    {
        if(cmp(cur ->data, data_ref) == 0)
        {
            if(prev == 0)
            {
                *begin_list = cur ->next;
            }
            else
                prev->next = cur->next;

                temp = cur;
                cur = cur ->next;
                free(temp);

        }
        else
        {
            prev = cur;
            cur = cur ->next;
        }
    }




}
#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

// En basit karşılaştırma (adresleri kıyaslar, aynıysa 0 döner)
int cmp(void *a, void *b) { return (a != b); }

int main(void)
{
	// Mecbur malloc kullanıyoruz çünkü fonksiyonumuz sildiği vagonu free'liyor.
	t_list *n1 = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));

	n1->data = "Sil";     n1->next = n2;
	n2->data = "Kalacak"; n2->next = NULL;

	t_list *tren = n1;

	// "Sil" datasını taşıyan vagonu siliyoruz
	ft_list_remove_if(&tren, "Sil", cmp);

	if (tren)
		printf("Kalan vagon: %s\n", (char *)tren->data);

	return (0);
}