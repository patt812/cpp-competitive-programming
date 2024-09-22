#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  vector<vector<string>> hs(4, vector<string>(3, "0000000000"));
  int n, b, f, r, v;
  cin >> n;

  rep(_, n) {
    cin >> b >> f >> r >> v;
    int tmp = hs[b - 1][f - 1][r - 1] - '0';
    hs[b - 1][f - 1][r - 1] = (tmp + v) + '0';
  }

  rep(i, 4) {
    rep(j, 3) {
      rep(k, 10) cout << ' ' << hs[i][j][k];
      cout << "\n";
    }
    if (i < 3) cout << "####################\n";
  }
}