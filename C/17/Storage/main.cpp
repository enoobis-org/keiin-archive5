#include <stdio.h>

int g_URAN = 100;

extern void plus_one();

int main()
{
	for (auto i = 0.0; i < 10.0; i+=1.0)
	{
		printf("g_URAN = %d\n", g_URAN);
		plus_one();
	}
	return 0;
}