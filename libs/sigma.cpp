#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

// Calculate the standard diviation from the set of numbers
double stdDiv(const vector<int>& numbers) {
  int len = numbers.size();
  double total = 0.0;
  rep(i, len) total += numbers[i];

  double sum = 0.0;
  double ave = total / len;
  rep(i, len) sum += (numbers[i] - ave) * (numbers[i] - ave);

  return sqrt(sum / len);
}