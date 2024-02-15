#include <stdio.h>

int swap();

int main() {
  int a,b;

  
  printf("print two numbers\n");
  scanf( "%d %d", &a, &b);
  printf("the sum of %d and %d is %d\n", a, b, a+b);
  swap(a, b);
  printf("the sum of %d and %d is %d\n", a, b, a+b);
  return 0;
}

int swap(int* a, int* b)
{
  int c = *a;
  *a = *b;
  *b = c;
  return 0;
}