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

  int n;
  cin >> n;
  vector<int> th(2, 0);

  string w1, w2;
  rep(_, n) {
    cin >> w1 >> w2;
    if (w1 == w2) {
      th[0]++;
      th[1]++;
      continue;
    }
    int i = (w1 > w2) ? 0 : 1;
    th[i] += 3;
  }

  cout << th[0] << ' ' << th[1] << "\n";
}