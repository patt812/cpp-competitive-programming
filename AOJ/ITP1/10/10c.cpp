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

  while (1) {
    int n, t = 0;
    cin >> n;
    if (n == 0) break;

    vector<int> s(n);
    rep(i, n) {
      cin >> s[i];
      t += s[i];
    }

    double a, sum = 0.0;
    double m = (double)t / n;

    rep(i, n) sum += (s[i] - m) * (s[i] - m);
    a = sqrt(sum / n);

    printf("%.8f\n", a);
  }
}