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

  string s;
  int m, h;

  while (1) {
    cin >> s;
    if (s == "-") break;

    cin >> m;
    rep(_, m) {
      string a, b;
      cin >> h;
      a = s.substr(0, h);
      b = s.substr(h);
      s = b + a;
    }
    cout << s << '\n';
  }
}