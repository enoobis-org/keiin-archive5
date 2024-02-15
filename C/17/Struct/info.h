#pragma once

typedef unsigned int uint;

typedef struct STUDENT_TAG
{
	char	name[64];
	float	height;
	uint	year : 12;
	uint	month : 4;
	uint	day : 5;
	uint	sex : 1;
} STUDENT;
