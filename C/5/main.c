#include <stdio.h>
int sum(int num1, int num2);
void multi(int n);

//main
int main(void) 
{
  int number = 6;
  multi(number);
  int result = sum(1, 2);
  printf("%d" , result);
  return 0;
}

//functions
int sum(int num1, int num2)
{
  return num1 + num2;
}

void multi(int n) 
{
    for (int i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", n, i, n * i);
        printf("======\n");
    }
}
7
100
  7
  7

  