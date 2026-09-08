#include <unistd.h>

void str_capitalizer (char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        if(str[i] >= 'a' && str[i] <= 'z' && (i == 0 || str[i - 1] == ' ' || str[i - 1] =='\t'))
        {
            str[i] = str[i] - 32;
        }
        write(1,&str[i],1);
        i++;
    }
}
int main(int args , char **argv)
{
    if(args == 1)
    {
        write(1,"\n",1);
    }
    else
    {
        int i = 1;
        while( i < args)
        {
            str_capitalizer(argv[i]);
            write(1,"\n",1);
            i++;
        }
        return(0);
    }
        







        
   
    
    
}