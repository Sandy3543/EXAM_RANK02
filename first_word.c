#include <unistd.h>
int main()
{
    char *str = " sarah wael alfar";
    int i = 0;
    while(str[i] == ' ' || str[i] == '\t')
    {
        i++;
    }
    while(str[i] && (str[i] != ' ' ||str[i] == '\t' || str[i] == '\0'))
    {
       write(1, &str[i], 1);
       i++;
    }
}
