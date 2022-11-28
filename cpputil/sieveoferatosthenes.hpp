#pragma once
#include <array>
#include <iostream>
#include <vector>
#include <format>
#include <string>

namespace sieve {

std::vector<long long> constSieve(long long n);
long long constSieveGetN(int n);

void simpleSieve(int limit, std::vector<long long> &prime);
std::vector<long long> segmentedSieve(long long n);

} // namespace sieve