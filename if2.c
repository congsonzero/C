#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("So thu 1 lon hon so thu 2");
    }
    else
    {
        if (num1 == num2)
        {
            printf("hai so bang nhau");
        }
        else
            printf("So thu 2 lon hon so thu 1");
    }
    return 0;
}