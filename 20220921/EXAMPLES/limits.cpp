#include <iostream>
#include <limits>
int main () {
  
  std::cout << "std::numeric_limits<double>::epsilon () = "
            << std::numeric_limits<double>::epsilon ()
            << std::endl;

  std::cout << "std::numeric_limits<double>::min () = "
            << std::numeric_limits<double>::min ()
            << std::endl;

  std::cout << "std::numeric_limits<double>::max () = "
            << std::numeric_limits<double>::max ()
            << std::endl;

  std::cout << "std::numeric_limits<double>::lowest () = "
            << std::numeric_limits<double>::lowest ()
            << std::endl;
  
  std::cout << "std::numeric_limits<double>::denorm_min () = "
            << std::numeric_limits<double>::denorm_min ()
            << std::endl;

  return 0;
}
