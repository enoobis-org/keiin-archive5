#include <stdio.h>

extern int g_URAN;

void plus_one()
{
	static int counter = 0;
	counter++;
	g_URAN++;
	printf("counter = %d\n", counter);
}