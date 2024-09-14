#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  vector<pair<int, int>> a;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    a.push_back(make_pair(y, x));
  }

  sort(a.begin(), a.end());
  for (auto p : a) {
    cout << p.second << " " << p.first << "\n";
  }
}