#include <stdio.h>

int main(void) 
{
  char greet[] = "Hello Daniel and Akylbek";
  greet[10] = '\0';
  greet[10] = '!';
  char something[] = "goooood";
  printf("%s\n", greet);
  printf("%s\n", something);

  printf("lenght of greet is %d", strlen(greet));
  int i = strcmp(greet, something);
  printf("%d", i);
  return 0;
  return 0;
}

