#include<stdio.h>

char    *ft_strpbrk(const char *s, const char *accept)
{
    int i = 0;
    int j = 0;
    while(s[i])
    {
        j = 0;
        while(accept[j])
        {
            if(s[i] == accept[j])
            {
                return (char *)s+i;
            }
            j++;
        }
        i++;
    }
    return NULL;
}

int main()
{
    char *str = "sarah";
    char *s = "xyzfr";
    char *found = ft_strpbrk(str, s);
    printf("%s", found);
}
