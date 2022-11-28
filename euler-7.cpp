#include <iostream>
#include "cpputil/sieveoferatosthenes.cpp"

int main(int argc, char** argv) {
	std::cout << sieve::constSieveGetN(10001) << std::endl;
	return 0;
}