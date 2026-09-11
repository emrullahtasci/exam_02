#include"ft_list_size.h"

int ft_list_size(t_list *begin_list)
{
    int count = 0;
    while(begin_list)
    {
        begin_list = begin_list ->next;
        count++;
    }
    return(count);

}
#include<stdlib.h>
#include<stdio.h>
int main()
{
    t_list *a = malloc(sizeof(t_list));
    t_list *b = malloc(sizeof(t_list));
    t_list *c = malloc(sizeof(t_list));

    a->next = b;
    a->data = NULL;

    b->next = c;
    b ->data = NULL;

    c-> next = NULL;
    c ->data = NULL;

    printf("%d",ft_list_size(a));
    free(a);
    free(b);
    free(c);
    return(0);
}