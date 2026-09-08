#include<unistd.h>

int main(int args,char **argv)
{
    int i = 0;
    int j = 0;
    if(args == 3)
    {
        while(argv[1][i] && argv[2][j])
        {
            if(argv[1][i] == argv[2][j])
            {
                i++;
            }
            j++;
        }
        
        if(argv[1][i] == '\0')
        {
            write(1,"1",1);
        }
        else
        {
            write(1,"0",1);
        }
    }
    write(1,"\n",1);
}