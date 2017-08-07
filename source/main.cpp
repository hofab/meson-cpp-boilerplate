#include <iostream>
#include <stdlib.h>

#include "example.hpp"

/*
 * Simple main program that demontrates how access
 * CMake definitions (here the version number) from source code.
 */
int main() {
  std::cout << "This is the cpp boilerplate build with meson.build!" << std::endl;
  /* std::system("cat ../LICENCE"); */

  // Bring in the dummy class from the example source,
  // just to show that it is accessible from main.cpp.
  Dummy d = Dummy();
  return d.doSomething() ? 0 : -1;
}
