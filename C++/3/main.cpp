#include <iostream>

using namespace std;

// int add(int a, int b, int c, int d);
int add(int a = 0, int b = 0, int c = 0, int d = 0);

int main() 
{
//  cout << "sum - " << add(10,20,30,40) << endl;
//  cout << "sum - " << add(10,20,30,0) << endl;
//  cout << "sum - " << add(10,20,0,0) << endl;
//  cout << "sum - " << add(10,0,0,0) << endl;
//  cout << "sum - " << add(0,0,0,0) << endl;

  cout << "sum - " << add(10,20,30,40) << endl;
  cout << "sum - " << add(10,20,30) << endl;
  cout << "sum - " << add(10,20) << endl;
  cout << "sum - " << add(10) << endl;
  cout << "sum - " << add() << endl;
  
  return 0;
}

int add(int a, int b, int c, int d)
{
  return a + b + c + d;
}
