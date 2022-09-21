#include <iostream>
int main () {
  double x{1.0};
  int ii = 0;
  int a;
  for (; ; x /= 2.0, ++ii) 
    if (x + 1.0 <= 1.0) {
      std::cout << "ii = " << ii << " x = " << x << std::endl;
      break;
    }
  return 0;
}
