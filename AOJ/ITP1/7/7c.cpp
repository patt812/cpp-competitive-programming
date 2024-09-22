#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int r, c, sum = 0;
  cin >> r >> c;
  vector<vector<int>> xls(r, vector<int>(c));

  rep(i, r) {
    int rsum = 0;
    rep(j, c) {
      cin >> xls[i][j];
      rsum += xls[i][j];
      cout << xls[i][j] << ' ';
    }
    sum += rsum;
    cout << rsum << "\n";
  }

  rep(i, c) {
    int csum = 0;
    rep(j, r) csum += xls[j][i];
    cout << csum << ' ';
  }
  cout << sum << "\n";
}