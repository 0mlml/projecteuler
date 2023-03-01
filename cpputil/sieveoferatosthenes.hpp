#pragma once
#include <array>
#include <format>
#include <iostream>
#include <string>
#include <vector>


namespace sieve {

std::vector<long long> constSieve(long long n);
long long constSieveGetN(int n);

void simpleSieve(int limit, std::vector<long long> &prime);
std::vector<long long> segmentedSieve(long long n);

std::vector<bool> simpleSieveRetAll(long long n);

} // namespace sieve