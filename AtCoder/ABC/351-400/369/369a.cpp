#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int x, y;
  cin >> x >> y;
  int ans = 0;

  if (x == y) {
    ans = 1;
  } else if ((x + y) % 2 == 0) {
    ans = 3;
  } else {
    ans = 2;
  }
  cout << ans << "\n";
}