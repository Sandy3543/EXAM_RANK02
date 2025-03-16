#include <unistd.h>

void    repeat_alpha(char *str)
{
    int i = 0;
    int k = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            k = str[i] - 'a' + 1;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            k = str[i] - 'A' + 1;
        }
        else
            k = 1;
        while(k--)
        {
            write(1, &str[i], 1);
        }
        i++;
    }
   
   
}
int main()
{
    char str[] = "4abc d";
    repeat_alpha(str);
}
