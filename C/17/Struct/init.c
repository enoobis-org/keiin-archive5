#include "info.h"

void init_v(STUDENT st, char* name, int year, int month, int day, float height, int sex)
{
	strcpy(st.name, name);
	st.year = year;
	st.month = month;
	st.day = day;
	st.height = height;
	st.sex = sex;
}

void init_p(STUDENT* pst, char* name, int year, int month, int day, float height, int sex)
{
	strcpy(pst->name, name);
	pst->year = year;
	pst->month = month;
	pst->day = day;
	pst->height = height;
	pst->sex = sex;
}
