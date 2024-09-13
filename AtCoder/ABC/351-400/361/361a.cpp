#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, k, x;
  cin >> n >> k >> x;

  vector<int> a(n);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    cout << a[i] << ' ';
    if (i == k) {
      a.push_back(x);
      cout << x << ' ';
    }
  }
  cout << "\n";
}