#include <stdio.h>

int main()
{
   int i,a,b;
   printf("Nhap 2 so a va b ");
   scanf("%d%d",&a,&b);
    if (a>b)
    a = a + b - (b = a);
    printf("%d",b);
    for(i=b-1;i>=a;i--)
    {
        printf(",%d",i);
    }    
    
    return 0;
}