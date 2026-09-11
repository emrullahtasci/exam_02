void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j = 0;
    int tmp ;


    if(size == 0)
    {
        return;
    }
    i = 0;
    while(i < size - 1)
    {
        j = 0;
        while(j < size -1 - i)
        {
            if(tab[j] > tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;

            }
            j++;
        }
        i++;

    }
}
#include<stdio.h>
int main()
{
    int tab[] = {1 ,2,3,4 ,5,2,3,4};
    unsigned int size= 8;
    unsigned int i ;
    sort_int_tab(tab ,size);
    i = 0;
    while(i < size)
    {
        printf("%d",tab[i]);
        i++;


    }
}