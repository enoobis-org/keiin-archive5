#include "info.h"

void display_v(STUDENT st)
{
	printf("=== %s ===\n", st.name);
	printf("Name:\t\t%s\n", st.name);
	printf("Birthday:\t%d %d %d\n", st.day, st.month, st.year);
	printf("Height:\t\t%f\n", st.height);
	printf("Gender:\t\t%c\n", st.sex ? 'M' : 'W');
	printf("I am %d%% OK.", 100);
}

void display_p(STUDENT* st)
{
	printf("=== %s ===\n", st->name);
	printf("Name:\t\t%s\n", st->name);
	printf("Birthday:\t%d %d %d\n", st->day, st->month, st->year);
	printf("Height:\t\t%f\n", st->height);
	printf("Gender:\t\t%c\n", st->sex ? 'M' : 'W');
}
