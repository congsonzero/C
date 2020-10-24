#include <stdio.h>

int main()
{
    int so1, so2;
    char kytu;
    printf("vui long nhap so1 va so2: ");
    scanf("%d%d", &so1, &so2);
    int i = 1;
    while (i)
    {
        printf("\nvui long nhap phep tinh ( + , - , *, /): ");
        getchar();
        scanf("%c", &kytu);
        switch (kytu)
        {
            case '+':
                printf("phep cong 2 so = %d", so1 + so2);
                break;
            case '-':
                printf("phep true 2 so = %d", so1 - so2);
                break;
            case '*':
                printf("phep nhan 2 so = %d", so1 * so2);
                break;
            case '/':
                if (so2 != 0)
                {
                    printf("phep chia 2 so = %d", so1 / so2);
                }
                else
                {
                    printf("so2 bang 0 nen khong chia duoc");
                }
                break;
            default:
                printf("nhap ky tu ko phai la + - * / nen thoat chuong trinh");
                i=0;
                break;
        }
    
    }

    return 0;
}