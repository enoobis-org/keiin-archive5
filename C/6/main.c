#include <stdio.h>

void loop_for(); 
void loop_while();
void loop_do_while();
void loop_goto();

int main(void) 
{
  //loop_for();
  //loop_while();
  //loop_do_while();
  loop_goto();
  return 0;
}

void loop_for()
{
  for(int a = 0; a <=10; a++)
  {
    for(int b = 0; b <=10; b++)
    {
      printf("%d x %d = %d\n", a, b, a*b);
    }
  }
}
void loop_while()
{
  int a = 0;
  
  while(a <= 10)
  {
    int b = 0;
    while(b <= 10)
    {
      printf("%d x %d = %d\n", a, b, a*b);
      b++;
    }
    a++;
  }
}

void loop_do_while()
{
  int a = 0;

  do
  {
    int b = 0;
    do
    {
      printf("%d x %d = %d\n", a, b, a*b);
      b++;
    }
    while(b <= 10);
    a++;
  }
    while(a <= 10);
}
void loop_goto()
{
  int a = 0;
  start:
  if(a > 10) goto end;
  int b = 0;
  inner_start:
  if(b > 10) goto inner_end;
  printf("%d x %d = %d\n", a, b, a*b);
  b++;
  goto inner_start;
  inner_end:
  a++;
  goto start;
  end:
  return;
}