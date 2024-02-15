#include <stdio.h>
#include <string.h>

typedef struct {
  int day;
  int month;
  int year;
}birthday;

typedef struct {
  birthday birth;
  char name[32];
  int age;
  double gpa;
  int gen;
  float height;
  float weight;
}student;

void input1(student st, char* name, int age, float height, float weight, int gen, int year, int month, int day);
void input2(student* st, char* name, int age, float height, float weight, int gen, int year, int month, int day);
void display1(student st);
void display2(student* st);
int main(void) {
  student student1, student2, student3;

  // student1
  input2(&student1, "Daniel", 21, 160, 50, 1, 2002,3,1);

  // student2
  input2(&student2, "Akylbek", 20, 160, 50, 1, 2001,11,2);

  // student3
  input2(&student3, "Uran", 19, 160, 50, 1, 2003,12,3);

  display2(&student1);
  display2(&student2);
  display2(&student3);


  return 0;
}

void display1(student st)
{
  // print students
  printf("Student 1: %s\n", st.name);
  printf("Student1's age is %d\n", st.age);
  printf("Student1's gpa is %lf\n", st.gpa);
  printf("Student1's gender is %s\n", st.gen == 1 ? "male" : "female");
  printf("Student1's height is %f\n", st.height);
  printf("Student1's weight is %f\n", st.weight);
  printf("Student1's birthday is %d/%d/%d\n", st.birth.day, st.birth.month, st.birth.year);
}

void display2(student* st)
{
  printf("Student 1: %s\n", st->name);
  printf("Student1's age is %d\n", st->age);
  printf("Student1's gpa is %lf\n", st->gpa);
  printf("Student1's gender is %s\n", st->gen == 1 ? "male" : "female");
  printf("Student1's height is %f\n", st->height);
  printf("Student1's weight is %f\n", st->weight);
  printf("Student1's birthday is %d/%d/%d\n", st->birth.day, st->birth.month, st->birth.year);
}

/*void input1(student st, char* name , int age , float height , float weight , int gen , int year)
{
  strcpy(student1.name, name);
  student1.age = age;
  student1.gen = gen;
  student1.height = height;
  student1.weight = weight;
  student1.birth.year = year;
}
*/
void input2(student* st, char* name, int age, float height, float weight, int gen, int year , int month , int day)
{
  strcpy(st->name, 32, name);
  st->age = age;
  st->gen = gen;
  st->height = height;
  st->weight = weight;
  st->birth.year = year;
  st->birth.month = month;
  st->birth.day = day;
}
