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