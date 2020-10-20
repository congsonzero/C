#include <stdio.h>
int main()
{
  int a, b, c, max, min;
  printf("a= ");
  scanf("%d", &a);
  printf("b= ");
  scanf("%d", &b);
  printf("c= ");
  scanf("%d", &c);
  if ((a == b) && (b == c))
  {
    printf("3 so bang nhau");
  }
  else
  {
    if (a >= b)
    {
      max = a;
      min = b;
    }
    else
    {
      max = b;
      min = a;
    }
    if (c > max)
    {
      max = c;
    }
    else
    {
      if (c < min)
      {
        min = c;
      }
    }
    printf("Gia tri lon nhat la:%d\nGia tri nho nhat la:%d", max, min);
  }
  return 0;
}