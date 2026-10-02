
#include<stdlib.h>
#include<stdio.h>
int main(int args, char **argv)
{

    if(args == 2)
    {
        int sayi = atoi(argv[1]);

        int i = 2;

        if(sayi == 1)
        {
            printf("1");
        }
        while(i <= sayi)
        {
            if(sayi % i == 0)
            {
                printf("%d",i);
                sayi = sayi / i;
            }
            if(sayi > 1)
            {
                printf("*");
            }
            else
                i++;
        }
        

        
    }
    printf("\n");
    return(0);

    



}