#include <unistd.h>

void    ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
void    alpha_mirror(char *str)
{
    int i = 0;
    int k = 0;
    while(str[i])
    {
        if(str[i] >= 'a' &&str[i] <= 'z')
        {
            k = str[i] - 'a';
            str[i] = 'z' - k;
        }
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            k = str[i] - 'A';
            str[i] = 'Z' - k;
        }
        i++;
    }
    ft_putstr(str);
}

int main()
{
    char str[] = "abC d";
    alpha_mirror(str);
}
