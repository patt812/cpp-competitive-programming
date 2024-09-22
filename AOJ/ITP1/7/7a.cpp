#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int m, f, r;
  while (1) {
    cin >> m >> f >> r;
    if (m + f + r == -3) break;

    if (r >= 50) {
      cout << "C\n";
      continue;
    }
    if (f == -1 || m == -1) {
      cout << "F\n";
      continue;
    }

    int s = m + f;
    if (s >= 80) {
      cout << "A\n";
    } else if (s >= 65) {
      cout << "B\n";
    } else if (s >= 50) {
      cout << "C\n";
    } else if (s >= 30) {
      cout << "D\n";
    } else {
      cout << "F\n";
    }
  }
}