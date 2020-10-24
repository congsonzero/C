#include <stdio.h>

int main()
{
    int s,chiphi;
    printf("Nhap quang duong da di:");
    scanf("%d",&s) ;
    if (s<=1)
        {
            chiphi=13000;
        }
    else if (s<=30)
    {
        chiphi=13000+(s-1)*12000;
    }
    else
    {
        chiphi=13000+29*12000+(s-30)*11000;
    }
    printf("So tien phai tra la %d\n",chiphi);
    return 0;
}