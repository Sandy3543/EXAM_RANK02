#include <unistd.h>

void    rotone(char *str)
{
    char c;
    int i = 0;
    while(str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
        {
            c = str[i] + 1;
            write(1, &c, 1);
        }
        else if(str[i] == 'z' || str[i] == 'Z')
        {
            c = str[i] - 25;
            write(1, &c, 1);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main()
{
    char str[] = "Abc Z";
    rotone(str);
}
