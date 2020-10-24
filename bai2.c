#include <stdio.h>

int main()
{
   int n,i=1,j;
   printf("gia tri n ");
   scanf("%d",&n);
   while(i<=n)
   {
       j=1;
       while (j<=i)
       {
           printf("%d",j);
           j++;
       }
       printf("\n");
       i++;
   }        
    return 0;
}
// i=1 j=1
// i=2 j=1 j=2
// i=3 j=1 j=2 j=3