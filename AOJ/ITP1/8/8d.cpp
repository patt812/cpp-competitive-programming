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
  getline(cin, s);
  getline(cin, t);
  s += s;

  if (s.find(t) != npos) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
}
