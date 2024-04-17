#include <iostream>
using namespace std;

int main() {


  int ia = 100;
  float* fa = reinterpret_cast<float*>(&ia); // no data
  float fc = static_cast<float>(ia); // data

  cout << ia << endl;
  cout << *fa << endl; 
  cout << fc << endl;

  return 0;
}
