#include <iostream>

using namespace std;

// void rotate(int& a, int& b, int& c);
void rotate(int *a, int *b, int *c = nullptr);

int main() 
{

 int a = 1, b = 2, c = 3;

//  cout << "Before: " << a << " " << b << " " << c << endl;
//  rotate(a, b, c);
//  cout << "AFter : " << a << " " << b << " " << c << endl;

  cout << "Before: " << a << " " << b << " " << c << endl;
  rotate(&a, &b, &c); // Pass addresses of a, b, and c
  cout << "After : " << a << " " << b << " " << c << endl;
  return 0;
  
  return 0;
}

// void rotate(int& a, int& b, int& c)
//{
//   int temp = a;
//   a = b;
//   b = c;
//   c = temp;

//}

void rotate(int *a, int *b, int *c) 
{
  int temp = *a;
  *a = *b;
  
  if (c == nullptr) 
  {
    *b = temp;
  } else 
  {
    *b = *c;
    *c = temp;
  }
}
