#include <stdio.h>
int main()
{
    int a, b, c, tam;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("c= ");
    scanf("%d", &c);
    if (a > b)
    {
        //     tam = a;
        //     a = b;
        //     b = tam;
        a = a + b - (b = a);
    }
    if (a > c)
    {
            tam = a;
            a = c;
            c = tam;
    }
    if (b > c)
    {
        //     tam = b;
        //     b = c;
        //     c = tam;
        b = b + c;
        c = b - c;
        b = a - c;
    }
    printf("%d%d%d", a, b, c);

    return 0;
}