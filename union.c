#include <unistd.h>

void    ft_union(char *a, char *b)
{
    int i = 0;
    int j = 0;
    int printed[255] = {0};
    while(a[i] && !printed[(int)a[i]])
    {
        write(1, &a[i], 1);
        printed[(int)a[i]] = 1;
        i++;
    }
    i = 0;
    while(a[i])
    {
        j = 0;
        while(b[j])
        {
            if(a[i] != b[j] && !printed[(int)b[j]])
            {
                write(1, &b[j], 1);
                printed[(int)b[j]] = 1;
            }
            j++;
        }
        i++;
    }
}
int main()
{
    char *str = "zpadinton";
    char *str2 = "paqefwtdjetyiytjneytjoeyjnejeyj";
    ft_union(str, str2);
}
