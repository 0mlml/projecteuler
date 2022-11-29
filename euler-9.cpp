#include <iostream>

int main(int argc, char const *argv[]) {
  for (unsigned int a = 1; a < 1000; a++) {
    for (unsigned int b = a + 1; b < 1000 - a; b++) {
      unsigned int csq = a * a + b * b;
      float c = sqrt(csq);
      if (roundf(c) != c)
        continue;
      if (a + b + c == 1000) {
        unsigned int ans = a * b * c;
        std::cout << ans << std::endl;
        return 0;
      }
    }
  }
}
