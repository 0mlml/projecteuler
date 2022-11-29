#include <iostream>

int main(int argc, char const *argv[]) {
  const unsigned int divisorCount = 500;

  unsigned int index = 0;
  unsigned int num = 0;
  unsigned int divisors = 0;
  while (divisors < divisorCount) {
    num += ++index;

    if (divisorCount > 300 && num % 10)
      continue;

    divisors = 0;
    unsigned int i = 1;
    while (i * i < num)
      if (num % i++ == 0)
        divisors += 2;

    divisors += i * i == num;
  }

  std::cout << num << std::endl;
}
