#include <iostream>

// Find sum of fibonacci terms not exceeding four million
int main(int argc, char **argv) {
  int n1 = 0, n2 = 1, sum = 0;
  while (n2 <= 4 * pow(10, 6)) {
    int t = n1;
    n1 = n2;
    n2 += t;
    if (!(n2 % 2))
      sum += n2;
  }
  std::cout << sum << std::endl;
  return 0;
}