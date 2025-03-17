#include<stdio.h>

int     pgcd(int a, int b)
{
    while(b != 0)
    {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main()
{
    int i = pgcd(25, 15);
    printf("%d", i);
}
