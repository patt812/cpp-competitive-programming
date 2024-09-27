#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

// Determine if int:n includes int:target
bool includeN(int n, int target) {
  while (n > 0) {
    if (n % 10 == target) return true;
    n /= 10;
  }
  return false;
}

// Find the number of unique triplet combinations (i, j, k)
// such that i + j + k = x, where 1 <= i < j < k <= n
int countTripletCombinations(int n, int x) {
  int count = 0;
  for (int i = 1; i <= n - 2; ++i) {
    for (int j = i + 1; j <= n - 1; ++j) {
      int k = x - i - j;
      if (k > j && k <= n) {
        count++;
      }
    }
  }
  return count;
}

// Calcurate greatest common divisor by Euclidean algorithm
int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

// Determine if int:n is prime number
bool isPrime(int n) {
  if (n == 2) return true;
  if (n < 2 || n % 2 == 0) return false;

  int i = 3;
  double sqrt_n = sqrt(n);
  while (i <= sqrt_n) {
    if (n % i == 0) return false;
    i = i + 2;
  }
  return true;
}