#include <stdio.h>

int main()
{
    int x = 1, y;
    do
    {
        printf("%d\t", x);
        x++;
    } while (x < 10);
    printf("\n");
    for (y = 1; y < 10; y++)
    {
        printf("%d\t",y);
    }
    return 0;
}