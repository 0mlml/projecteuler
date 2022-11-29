#include <iostream>

bool isPalindromeProduct(int a, int b) {
  std::string s = std::to_string(a * b);
  if (s.length() % 2) // remove middle digit
    s.erase(floor(s.length() / 2), 1);
  for (int i = 0; i < s.length() / 2; i++)
    if (s.at(i) != s.at((s.length() - 1) - i))
      return false;
  return true;
}

// Find largest palindrome product of 3 digit numbers
int main(int argc, char const *argv[]) {
  int max = 0;
  for (int i = 999; i > 99; i--)
    for (int j = 999; j > 99; j--)
      if (isPalindromeProduct(i, j) && i * j > max)
        max = i * j;

  std::cout << max << std::endl;
  return 0;
}