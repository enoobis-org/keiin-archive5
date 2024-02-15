#include <stdio.h>

struct birthday {
  int day;
  int month;
  int year;
};

struct student_tag {
  char name[32];
  int age;
  double gpa;
  int gen;
  float height;
  float weight;
};

int main(void) {

  struct birthday birthday1,birtday2,birtday3;
  struct student_tag student1,student2,student3;

  // student1
  student1.age = 18;
  student1.gpa = 3.5;
  student1.gen = 1;
  student1.height = 160;
  student1.weight = 50;

  //
  student2.age = 19;
  student2.gpa = 3.6;
  student2.gen = 1;
  student2.height = 160;
  student2.weight = 50;

  student3.age = 20;
  student3.gpa = 3.7;
  student3.gen = 1;
  student3.height = 160;
  student3.weight = 50;

  //print students 
  printf("Student1's age is %d\n",student1.age);
  printf("Student1's gpa is %lf\n",student1.gpa);
  printf("Student1's gender is %d\n",student1.gen);
  printf("Student1's height is %f\n",student1.height);
  printf("Student1's weight is %f\n",student1.weight);

  printf("Student2's age is %d\n",student2.age);
  printf("Student2's gpa is %lf\n",student2.gpa);
  printf("Student2's gender is %d\n",student2.gen);
  printf("Student2's height is %f\n",student2.height);
  printf("Student2's weight is %f\n",student2.weight);
  
  printf("Student3's age is %d\n",student3.age);
  printf("Student3's gpa is %lf\n",student3.gpa);
  printf("Student3's gender is %d\n",student3.gen);
  printf("Student3's height is %f\n",student3.height);
  printf("Student3's weight is %f\n",student3.weight);
  return 0;
}