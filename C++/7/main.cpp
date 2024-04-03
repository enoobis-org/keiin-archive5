#include <iostream>
using namespace std;

int main() 
{
//  int a  =100;
//  int *pa;
//  const int b  =  200;
//  const int *pb;
//  *pa = a;
//  *pb = b;
//  cout << *pa << endl;
//  cout << *pb << endl;

  int a = 100;
  int *pa = &a;
  const int b = 200;
  const int *pb = &b;
  printf("pa = %d, pb = %d\n", pa, pb);
  *pa = a;
  *pb = 100;
//  *const_cast<*int>(pb) = b;
  printf("pa = %d, pb = %d\n", pa, pb);
}