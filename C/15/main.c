#include <stdio.h>



int main()
{
  struct STUDENT_TAG
  {
    char name[64];
    int  year;
    int month;
    int day;
    float height;
  } daniel, akylbek;

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

  printf("%s\n", daniel.name);
  printf("%d\n", daniel.year);
  printf("%d\n", daniel.month);
  printf("%d\n", daniel.day);
  printf("%f\n", daniel.height);  
  printf("-------------------\n");
  printf("%s\n", akylbek.name);
  printf("%d\n", akylbek.year);
  printf("%d\n", akylbek.month);
  printf("%d\n", akylbek.day);
  printf("%f\n", akylbek.height);
 return 0;
  
}