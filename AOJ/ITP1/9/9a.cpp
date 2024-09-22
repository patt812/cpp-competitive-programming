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

  string s, t;
  cin >> t;

  int ans = 0;
  while (cin >> s && s != "END_OF_TEXT") {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if (s == t) ans++;
  }

  cout << ans << '\n';
}