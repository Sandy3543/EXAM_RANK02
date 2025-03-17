#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{

    int i = 0;
    int sign = 1;
    int res = 0;
    int c;
    
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign = -1;
        }
        i++;
    }
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'f')
        {
            c = str[i] - 'a' + 10;
        }
        if(str[i] >= 'A' && str[i] <= 'F')
        {
            c = str[i] - 'A' + 10;
        }
        if(str[i] >= '0' && str[i] <= '9')
        {
            c = str[i] - '0';
        }
         if(c >= str_base)
        {
            return 0;
        }
      
        res = res * str_base + c;
        i++;
    }
    return res *sign;
}

int main()
{
    char *str = "-FF";
    int i = ft_atoi_base(str, 16);
    printf("%d", i);
}
