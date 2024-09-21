#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int x, i = 1;
  while (1) {
    cin >> x;
    if (x == 0) break;
    printf("Case %d: %d\n", i++, x);
  }
}