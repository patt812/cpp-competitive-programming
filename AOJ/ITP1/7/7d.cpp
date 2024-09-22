#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, m, l;
  cin >> n >> m >> l;

  vector<vector<ll>> a(n, vector<ll>(m));
  rep(i, n) rep(j, m) cin >> a[i][j];

  vector<vector<ll>> b(m, vector<ll>(l));
  rep(i, m) rep(j, l) cin >> b[i][j];

  vector<vector<ll>> c(n, vector<ll>(l, 0));
  rep(i, n) {
    rep(j, l) {
      ll sum = 0;
      rep(k, m) { sum += a[i][k] * b[k][j]; }
      c[i][j] = sum;

      if (j > 0) cout << " ";
      cout << c[i][j];
    }
    cout << "\n";
  }
}
