#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, m, x;
  cin >> n >> m;
  unordered_set<int> chonan;

  char a;
  for (int i = 0; i < m; i++) {
    cin >> x >> a;
    if (a == 'M' && !chonan.contains(x)) {
      chonan.insert(x);
      cout << "Yes" << "\n";
      continue;
    }
    cout << "No" << "\n";
  }
}