#include <stdio.h>
extern void plus_one();
int g_dan =100;
int main()
{
 printf("g_dan = %d\n", g_dan);
 plus_one();
 printf("g_dan = %d\n", g_dan);
 return 0;
}