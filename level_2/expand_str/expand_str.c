#include<unistd.h>
int main(int args,char **argv)
{

    int i = 0;
    int space = 0;
    if(args == 2)
    {
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
        {
            i++;
        }
        while(argv[1][i])
        {
            if(argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                space = 1;
            }
            else
            {
                if(space == 1)
                {
                    write(1,"   ",3);
                    space = 0;
                }
                write(1,&argv[1][i],1);
                

            }
            i++;


        }
        


    }



}