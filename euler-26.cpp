#include <iostream>

int main(int argc, char const *argv[]) {
  for (int d = 0; d < 20; d++) {
    std::string s = std::to_string(ecvt(1/d, ));
    std::cout << s << std::endl;
  }
  return 0;
}
