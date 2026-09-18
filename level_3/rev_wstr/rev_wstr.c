#include<unistd.h>
int main(int args ,char **argv)
{
    if(args == 2)
    {
        int i = 0;
        int start ;
        int end;
        while(argv[1][i])
        {
            i++;
        }
        while(i > 0)
        {


            while(i > 0 && argv[1][i - 1] == ' ' || argv[1][i-1] == '\t')
            {
                i--;
            } 
            end = i;
            while(i > 0 && argv[1][i - 1] != ' ' && argv[1][i - 1] != '\t')
            {
                i--;
            }
            start = i;
            while(start < end)
            {
                write(1,&argv[1][start],1);
                start++;
            }
            if(i > 0)
            {
                write(1," ",1);
            }
        }
    }
    write(1,"\n",1);

}