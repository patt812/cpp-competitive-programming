#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int x, y;
  while (1) {
    cin >> x >> y;
    if (x + y == 0) break;

    if (x < y) {
      printf("%d %d\n", x, y);
    } else {
      printf("%d %d\n", y, x);
    }
  }
}