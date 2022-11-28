#include "cpputil/sieveoferatosthenes.hpp"
#include <iostream>

// Find largest prime factor of 600851475143
int main(int argc, char **argv) {
  unsigned long long theNum = 600851475143;

  for (unsigned long long factor = 2; factor * factor <= theNum; factor++)
    while (theNum % factor == 0 && theNum != factor) 
      theNum /= factor;

  std::cout << theNum << std::endl;

  return 0;
}
