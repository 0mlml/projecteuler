#include <iostream>

// Find sum of multiples of three or five under 1000
int main(int argc, char const *argv[]) {
  int sum = 0;
  for (int i = 0; i < 1000; i++)
    if (!(i % 3) || !(i % 5))
      sum += i;
  std::cout << sum << std::endl;
  return 0;
}