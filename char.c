#include <stdio.h>
int main()
{
    int a, b;
    char kytu;
    printf("Nhap ky tu:");
    scanf("%c", &kytu);
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    switch (kytu)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    default:
        printf("Nhap sai ky tu");
        break;
    }
    return 0;
}