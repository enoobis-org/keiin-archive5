#include <stdio.h>

int main(void) {
  int a = 1, b = 2;
  printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",
    a+b,a-b,a*b,a/b,a%b,a&b,a&&b,a|b,a||b,a^b,~a,!a, a>b,a>b?a:b);
  return 0;
}