#include <iostream>

long squareOfSum(int n) {
  long sum = 0;
  for (int i = 0; i <= n; i++) {
    sum += i;
  }
  return pow(sum, 2);
}

long sumOfSquares(int n) {
  long sum = 0;
  for (int i = 0; i <= n; i++) {
    sum += pow(i, 2);
  }
  return sum;
}

int main(int argc, char const *argv[]) {
  std::cout << squareOfSum(100) - sumOfSquares(100) << std::endl;
  return 0;
}