#include <stdio.h>

int main()
{
    int cd, cr, cv, dt;
    printf("Nhap chieu dai: ");
    scanf("%d", &cd);
    printf("Nhap chieu rong: ");
    scanf("%d", &cr);
    if ((cd > 0) && (cr > 0))
    {
        printf("Chu vi hinh chu nhat la %d", (cd + cr) * 2);
        printf("\ndien tich hinh chu nhat la %d", cd * cr);
    }
return 0;
}