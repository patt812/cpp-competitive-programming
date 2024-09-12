#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int m1 = -1, m2 = -1;
  int i1 = -1, i2 = -1;

  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    if (x > m1) {
      m2 = m1;
      i2 = i1;
      m1 = x;
      i1 = i;
    } else if (x > m2) {
      m2 = x;
      i2 = i;
    }
  }

  cout << i2 << "\n";
}