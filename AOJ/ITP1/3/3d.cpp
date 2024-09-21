#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int a, b, c;
  cin >> a >> b >> c;

  int ans = 0;
  for (int i = a; i <= b; i++) {
    if (c % i == 0) ans++;
  }
  cout << ans << "\n";
}