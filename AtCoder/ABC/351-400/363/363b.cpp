#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, t, p;
  cin >> n >> t >> p;

  int cnt = 0;
  vector<int> L(n);
  for (int i = 0; i < n; i++) cin >> L[i];
  sort(L.begin(), L.end(), greater());

  for (int x : L) {
    if (x < t) break;
    cnt++;
  }

  if (cnt >= p) {
    cout << 0 << "\n";
    return 0;
  }

  cout << t - L[p - 1] << "\n";
}