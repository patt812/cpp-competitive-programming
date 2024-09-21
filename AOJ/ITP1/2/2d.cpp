#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int w, h, x, y, r;
  cin >> w >> h >> x >> y >> r;

  if (y - r < 0 || y + r > h || x - r < 0 || x + r > w) {
    cout << "No\n";
  } else {
    cout << "Yes\n";
  }
}
