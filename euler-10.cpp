#include "cpputil/sieveoferatosthenes.hpp"
#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
  std::vector<long long> primez = sieve::constSieve(2000000);
  unsigned long long sum = 0;
  for (long long prime : primez) {
	sum += prime;
  }
  std::cout << sum << std::endl;
}
