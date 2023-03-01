#include "sieveoferatosthenes.hpp"

namespace sieve {

std::vector<long long> constSieve(long long n) {
  const long long MAX_SIZE = 2000001;

  std::vector<long long> isprime(MAX_SIZE, true);
  std::vector<long long> prime;
  std::vector<long long> SPF(MAX_SIZE);

  isprime[0] = isprime[1] = false;

  for (long long int i = 2; i < n; i++) {
    if (isprime[i]) {
      prime.push_back(i);

      SPF[i] = i;
    }

    for (long long int j = 0;
         j < (int)prime.size() && i * prime[j] < n && prime[j] <= SPF[i]; j++) {
      isprime[i * prime[j]] = false;

      SPF[i * prime[j]] = prime[j];
    }
  }

  return prime;
}

long long constSieveGetN(int n) {
  std::vector<unsigned long int> primez;
  primez.reserve(n);
  primez.push_back(2);

  for (unsigned long int i = 3; primez.size() < n; i += 2) {
    bool isPrime = true;
    for (unsigned long int prime : primez) {
      if (i % prime) {
        if (pow(prime, 2) > i) {
          break;
        }
      } else {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
      primez.push_back(i);
  }

  return primez[--n];
}

void simpleSieve(int limit, std::vector<long long> &prime) {

  std::vector<bool> mark(limit + 1, true);

  for (int p = 2; p * p < limit; p++) {

    if (mark[p] == true) {

      for (int i = p * p; i < limit; i += p)
        mark[i] = false;
    }
  }

  for (int p = 2; p < limit; p++) {
    if (mark[p] == true) {
      prime.push_back(p);
    }
  }
}

std::vector<long long> segmentedSieve(long long n) {
  int limit = floor(sqrt(n)) + 1;
  std::vector<long long> prime;
  prime.reserve(limit);
  simpleSieve(limit, prime);

  int low = limit;
  int high = 2 * limit;

  while (low < n) {
    if (high >= n)
      high = n;

    bool mark[limit + 1];
    memset(mark, true, sizeof(mark));

    for (int i = 0; i < prime.size(); i++) {

      int loLim = floor(low / prime[i]) * prime[i];
      if (loLim < low)
        loLim += prime[i];

      for (int j = loLim; j < high; j += prime[i])
        mark[j - low] = false;
    }

    for (int i = low; i < high; i++)
      if (mark[i - low] == true)
        prime.push_back(i);

    low = low + limit;
    high = high + limit;
  }

  return prime;
}

std::vector<bool> simpleSieveRetAll(long long n) {
  int limit = floor(sqrt(n)) + 1;
  std::vector<bool> isPrime(n, true);

  for (int p = 2; p * p < limit; p++) {

    if (isPrime[p] == true) {
      for (int i = p * p; i < limit; i += p)
        isPrime[i] = false;
    }
  }

  return isPrime;
}
} // namespace sieve