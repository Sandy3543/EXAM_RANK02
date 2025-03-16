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
void    search_and_replace(char *str, char a, char b)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == a)
        {
            str[i] = b;
        }
        i++;
    }
    ft_putstr(str);
}

int main()
{
    char str[] = "sarah";
    char *a = "a";
    char *o = "o";
    if(o[1] == '\0' && a[1] == '\0')
    {
        search_and_replace(str, a[0], o[0]);
    }
    else
        write(1, "\n", 1);
}
