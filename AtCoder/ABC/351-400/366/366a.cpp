#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, t, a;
  cin >> n >> t >> a;
  cout << ((max(t, a) > n / 2) ? "Yes" : "No") << "\n";
}