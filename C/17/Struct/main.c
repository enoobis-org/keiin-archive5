#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "info.h"
#include "init.h"
#include "display.h"

int main()
{
	STUDENT daniel, akylbek;
	STUDENT *p_daniel = &daniel, *p_akylbek = &akylbek;

	init_p(&daniel, "Daniel", 2002, 12, 7, 178.0f, 1);
	display_p(&daniel);
	*p_akylbek = daniel; // *p_akylbek == akylbek
	display_v(akylbek);
	printf("size = %d\n", sizeof daniel);
	return 0;
}
