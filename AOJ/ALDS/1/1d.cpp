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

  int mx = numeric_limits<int>::min();
  int mn, x;
  cin >> mn;

  rep(_, n - 1) {
    cin >> x;
    mx = max(mx, x - mn);
    mn = min(mn, x);
  }

  cout << mx << '\n';
}