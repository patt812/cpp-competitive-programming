#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, m;
  cin >> n >> m;

  vector<vector<int>> a(n, vector<int>(m));
  vector<int> b(m);
  rep(i, n) rep(j, m) cin >> a[i][j];
  rep(i, m) cin >> b[i];

  rep(i, n) {
    int sum = 0;
    rep(j, m) sum += a[i][j] * b[j];
    cout << sum << "\n";
  }
}