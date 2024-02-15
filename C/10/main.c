#include <stdio.h>

int main(void) 
{
  int a, b, c;
  printf("Enter three integers: ");
  scanf("%d %d %d", &a, &b, &c);
  if (a > b && a > c) 
  {
    printf("%d ", a);
    if (b > c)
    {
      printf("%d ", b);
      printf("%d ", c);
    }
    else 
    {
      printf("%d ", c);
      printf("%d ", b);
    }
  }
  else if (b > a && b > c) 
  {
    printf("%d ", b);
    if  (a > c)
    {
      printf("%d ", a);
      printf("%d ", c);
    }
    else
    {
      printf("%d ", c);
      printf("%d ", a);
    }
  }
  else 
  {
    printf("%d ", c);
    if (b > a)
    {
      printf("%d ", b);
      printf("%d ", a);
    }
    else
    {
      printf("%d ", a);
      printf("%d ", b);
    }
  }
  return 0;
}


