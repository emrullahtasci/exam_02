#include<unistd.h>
int main(int args ,char **argv)
{
    if(args < 2)
    {
        write(1,"\n",1);
    }
    int i = 0;
    int flag = 0;
    int start;
    int end;
    while(argv[1][i] == ' ' || argv[1][i] == '\t')
        i++;
    start = i;
    while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
    {
        i++;
    }
     end = i;
    while(argv[1][i] == ' ' || argv[1][i] == '\t')
    {
        i++;
    }
    if(argv[1][i] == '\0')
    {
        write(1,argv[1] + start, end - start);
        write(1,"\n",1);
        return(0);

    }
    
    while(argv[1][i])
    {
        if(argv[1][i] == ' ' || argv[1][i] == '\t')
        {
            flag = 1;
        }
        else
        {
            if(flag)
            {
                write(1," ",1);
                flag = 0;
            }
            write(1,&argv[1][i],1);
        }
        i++;
    }
    write(1," ",1);
    write(1,argv[1] + start, end - start);
    write(1,"\n",1);
    return(0);
}