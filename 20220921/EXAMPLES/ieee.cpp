#include <iostream>

int main () {
  double x{0.0};
  int ii = 0;
  for (x = 0; x<= 1; x += 0.1, ++ii)
    if (x == 0.3) 
      std::cout << ii << std::endl;
  return 0;
}
