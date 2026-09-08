#include <unistd.h>

void rst_capitalizer(char *str)
{
    int i = 0;
    int flag = -1;
    
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; 
        }
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            flag = i;
        }
        
        
        if(str[i] == ' ' || str[i] == '\t' || str[i + 1] == '\0')
        {
            if(flag != -1)
            {
                str[flag] = str[flag] - 32;
            }
            flag = -1;
        }
        i++;
    }
    
    write(1, str, i); 
}

int main(int args, char **argv)
{
    int i = 1;
    if(args == 1)
    {
        write(1, "\n", 1);
    }
    else
    {
        while(i < args)
        {
            rst_capitalizer(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    return(0);
}