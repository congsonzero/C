#include <stdio.h>

int main()
{
    int n,i,tong=0;
    printf("Nhap so n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        tong=tong+i*i*i;
    }
    printf("S=%d",tong);
    return 0;
}