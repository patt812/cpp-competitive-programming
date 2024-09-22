#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  string x;
  while (cin >> x) {
    if (x == "0") break;

    ll sum = 0;
    for (char c : x) {
      sum += c - '0';
    }

    cout << sum << '\n';
  }
}
