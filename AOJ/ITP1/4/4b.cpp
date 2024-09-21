#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  const double PI = 3.141592653589;
  double r;
  cin >> r;

  printf("%.5f ", r * r * PI);
  printf("%.5f\n", 2 * r * PI);
}