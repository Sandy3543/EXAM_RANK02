#include <unistd.h>

void    hidenp(char *str, char *hidden)
{
    int i = 0;
    int j = 0;
    while(str[i] && hidden[j])
    {
        while(str[i] == hidden[j])
            {
                j++;
            }
            i++;
    }
    
    if(hidden[i] == '\0')
    {
        write(1, "1", 1);
    }
    else
    {
        write(1, "0", 1);
    }
}
int main()
{
    char *str = "stahrytauyuyt";
    char *h = "sar";
    hidenp(str, h);
}
