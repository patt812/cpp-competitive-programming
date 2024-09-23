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

  int n;
  cin >> n;

  vector<double> x(n);
  rep(i, n) cin >> x[i];
  vector<double> y(n);
  rep(i, n) cin >> y[i];

  vector<double> P = {1, 2, 3};
  rep(p, P.size()) {
    double ans = 0.0;
    rep(i, n) { ans += pow(abs(x[i] - y[i]), P[p]); }
    ans = pow(ans, 1.0 / P[p]);
    printf("%.8f\n", ans);
  }

  double ans = 0.0;
  rep(i, n) { ans = max(ans, abs(x[i] - y[i])); }
  printf("%.8f\n", ans);
}