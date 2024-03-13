#include <iostream>

using namespace std;

void swap_p(int* a, int* b);
void swap_r(int& a, int& b);
void swap_v(int a, int b);


int main() 
{
  int a = 10 ,b = 20;
  cout << "def : " << "a = " << a << ", b = " << b << endl;
  swap_p(&a, &b);
  cout << "swap_p :"  << "a = " << a << ", b = " << b << endl;
  swap_r(a, b);
  cout << "swap_r :" << "a = " << a << ", b = " << b << endl;
  swap_v(a, b);
  cout << "swap_v :" << "a = " << a << ", b = " << b << endl;
  
  return 0;
}

void swap_p(int* a, int* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
  
}

void swap_r(int& a, int& b)
{
  int temp = a;
  a = b;
  b = temp;
}

void swap_v(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}