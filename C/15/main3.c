#include <stdio.h>

/*struct STUDENT_TAG
{
  char name[64];
  int  year;
  int month;
  int day;
  float height;
};*/

typedef struct STUDENT_TAG
{
  char name[64];
  int  year;
  int month;
  int day;
  float height;
}STUDENT;

int main()
{
  STUDENT daniel, akylbek;
  STUDENT *p_daniel = &daniel, *p_akylbek = &akylbek;

  daniel.year = 2002;
  daniel.month = 1;
  daniel.day = 1;
  daniel.height = 1.78;
  strcpy(daniel.name, "Daniel");

  akylbek.year = 2002;
  akylbek.month = 1;
  akylbek.day = 1;
  akylbek.height = 1.78;
  strcpy(akylbek.name, "Akylbek");


  //daniel = akylbek;
  //daniel = *p_akylbek;
  //*p_daniel = *p_akylbek;
  //*p_daniel = akylbek;

  printf("%s\n", p_daniel->name);
  printf("%d\n", p_daniel->year);
  printf("%d\n", p_daniel->month);
  printf("%d\n", p_daniel->day);
  printf("%f\n", p_daniel->height);  
  printf("-------------------\n");
  printf("%s\n", p_akylbek->name);
  printf("%d\n", p_akylbek->year);
  printf("%d\n", p_akylbek->month);
  printf("%d\n", p_akylbek->day);
  printf("%f\n", p_akylbek->height);
 return 0;
  
}