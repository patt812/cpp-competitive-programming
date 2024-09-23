#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;
constexpr auto npos = string::npos;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  double x1, x2, y1, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  double ans = pow(x2 - x1, 2) + pow(y2 - y1, 2);
  printf("%.8f\n", sqrt(ans));
}