#include <iostream>
#pragma once

inline int add(int a, int b, int c, int d) {
  return a + b + c + d;
}

int main() {
  std::cout << "sum: " << add(1, 2, 3, 4) << std::endl;
  return 0;
}
 