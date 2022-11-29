#include <bitset>
#include <iostream>

bool isPalindrome(std::string s) {
  if (s.length() % 2) // remove middle digit
    s.erase(floor(s.length() / 2), 1);
  for (int i = 0; i < s.length() / 2; i++)
    if (s.at(i) != s.at((s.length() - 1) - i))
      return false;
  return true;
}

// find sum of all numbers < 1 000 000 that are palindromes in base 10 and base
// 2
int main(int argc, char const *argv[]) {
  unsigned long long sum = 0;
  for (unsigned int i = 0; i < 1000000; i++) {
    if (isPalindrome(std::to_string(i))) {
      std::string b = std::bitset<64>(i).to_string();
      b.erase(0, b.find_first_not_of('0'));
      if (isPalindrome(b)) {
        sum += i;
      }
    }
  }
  std::cout << sum << std::endl;
}
