#include <iostream>
#include <cstdint>

int main (void)
{

  union 
  {
    double d;
    unsigned char b[8];
  }  d;

  std::cin >> d.d;
  for (int ii = 7; ii >= 0; --ii)
    { std::cout <<  std::bitset<8> (d.b[ii]) << " ";}
  std::cout << std::endl;

  return 0;
}




