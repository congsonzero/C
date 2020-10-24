#include <stdio.h>

int main()
{
    int i=1,n,t=0;
    printf("Nhap so n ");
    scanf("%d",&n);
    if (n<=0 ||n==1) printf("%d la khong phai so chinh phuong",n);    
    else
    {
    while((i*i)<= n)
        
        {
            if ((i*i)==n)
            {
            t=1;
            }
        i++;    
        }
       if(t) printf("%d la so chinh phuong",n);
       else printf("%d la khong phai so chinh phuong",n); 
    }
    return 0;
}