#include "ft_list.h"
void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list  *ft_list_ptr;
    ft_list_ptr = begin_list;
    while(ft_list_ptr)
    {
        (*f)(ft_list_ptr -> data);
        ft_list_ptr = ft_list_ptr ->next;
    }

}