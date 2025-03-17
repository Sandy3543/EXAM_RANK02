#include <unistd.h>

void    str_capitalizer(char *str)
{
    int i = 0;
    int new = 1;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
             str[i] += 32;
        }
        if(str[i] >= 'a' && str[i] <= 'z' && new)
        {
            str[i] -= 32;
            new = 0;
        }
        if(str[i] == ' ')
        {
            new = 1;
        }
        if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && str[i] != ' ')
        {
            new = 0;
        }

        write(1, &str[i], 1);
        i++;
    }
}

int main()
{
    char str[] = "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" ;
    str_capitalizer(str);
}
