#include <unistd.h>
int main(int ac, char *av[])
{
    (void)*av;
    int i = ac - 1;
    char c = i + '0';
    write(1, &c, 1);
}
