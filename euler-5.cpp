#include <iostream>

// Find the lowest positive number that can be divided evenly by all numbers 1-20
int main(int argc, char **argv) {
  for (int i = 1; i < pow(10, 10); i++) {
    bool w = true;
    for (int j = 1; j <= 20; j++) {
      if (i % j) {
        w = false;
        break;
      }
    }
	if (w) {
		std::cout << i << std::endl;
		break;
	}
  }
}