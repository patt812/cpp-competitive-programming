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
  int n;
  cin >> s >> n;

  int i, j;
  string op, t;
  rep(_, n) {
    cin >> op;

    if (op == "replace") {
      cin >> i >> j >> t;
      s.replace(i, j - i + 1, t);
    } else if (op == "reverse") {
      cin >> i >> j;
      reverse(s.begin() + i, s.begin() + j + 1);
    } else if (op == "print") {
      cin >> i >> j;
      cout << s.substr(i, j - i + 1) << '\n';
    }
  }
}