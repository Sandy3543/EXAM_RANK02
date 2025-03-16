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

void    rot_13(char *str)
{
    int i = 0;
    while(str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
        {
            str[i] += 13;
        }
         else if((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
        {
            str[i] -= 13;
        }
        i++;
    }
}

/*int main()
{
    char str[] = "abc m";
    rot_13(str);
   ft_putstr(str);
}*/
