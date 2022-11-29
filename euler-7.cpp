#include "cpputil/sieveoferatosthenes.cpp"
#include <iostream>


int main(int argc, char const *argv[]) {
  std::cout << sieve::constSieveGetN(10001) << std::endl;
  return 0;
}