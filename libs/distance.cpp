#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;
constexpr auto npos = string::npos;

// Calculate Minkowski distance for a given p value
// p = 1 represents the Manhattan distance (sum of absolute differences)
// p = 2 represents the Euclidean distance (the straight-line distance)
// p = 3 represents the cubic Minkowski distance (third power of differences)
double minkowski(const vector<double>& x, const vector<double>& y, double p) {
  double distance = 0.0;
  rep(i, x.size()) { distance += pow(abs(x[i] - y[i]), p); }
  return pow(distance, 1.0 / p);
}
