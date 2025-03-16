#include <stdio.h>
#include <unistd.h>

int		max(int* tab, unsigned int len)
{
    int i = 0;
    int max = tab[0];
    int j = 0;
   
    if(len == 0)
        return 0;
    while(tab[i] && i <= len)
    {
        if(tab[i] > max)
        {
            max = tab[i];
        }
        i++;
    }
    return max;
}

int main()
{
    int arr[] = {-6, -2, -7, -8};
    int i = max(arr, 2);
    printf("%d", i);
}
