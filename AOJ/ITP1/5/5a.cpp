#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int x, y;
  while (1) {
    cin >> x >> y;
    if (x + y == 0) break;
    rep(i, x) {
      rep(j, y) cout << '#';
      cout << "\n";
    }
    cout << "\n";
  }
}