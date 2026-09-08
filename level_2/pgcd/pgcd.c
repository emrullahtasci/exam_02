#include<stdio.h>
#include<stdlib.h>
int main( int args, char **argv)
{
    if(args == 3)
    {
        int sayi1 = atoi(argv[1]);
        int sayi2 = atoi(argv[2]);
        int kalan ;

        if(sayi1 == 0 || sayi2 == 0)
        {
            return(0);
        }
        while(sayi2 != 0)
        {
            kalan = sayi1 % sayi2;
            sayi1 = sayi2;
            sayi2 = kalan;
        }
        printf("%d",sayi1);

        
    }
    printf("\n");



}