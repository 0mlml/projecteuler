#include <iostream>

unsigned collatz(unsigned a) { return a % 2 ? 3 * a + 1 : a / 2; }

int main(int argc, char const *argv[]) {
  unsigned best = 0;
  unsigned bestlen = 0;
  for (int i = 0; i < 1000000; i++) {
    unsigned n = i;
    unsigned s = 0;
    while (n > 1) {
      n = collatz(n);
      s++;
    }
    if (s > bestlen) {
      bestlen = s;
      best = i;
    }
  }

  std::cout << best << std::endl;
}
