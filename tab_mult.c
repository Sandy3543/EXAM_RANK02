#include<unistd.h>

int     ft_atoi(char *str)
{
    int res = 0;
    int i = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return res;
}

void    ft_putnbr(int n)
{
    char c;
    if(n >= 10)
    {
        ft_putnbr(n/10);
    }
    c = n %10 + '0';
    write(1, &c, 1);
}

void     tab_mult(int n)
{
    int res = 0;
    int i = 1;
    char num = n + '0';
    char c;
    //char *r;
    while(i <= 9)
    {
        res = i * n;
        c = i + '0';
        
        
        write(1, &c, 1);
        write(1, "*", 1);
        write(1, &num, 1);
        write(1, "=", 1);
        ft_putnbr(res);
        //write(1, &r, 1);
        write(1, "\n", 1);
        i++;
    }
}

int main()
{
    char *str = "9";
    tab_mult(ft_atoi(str));
}
