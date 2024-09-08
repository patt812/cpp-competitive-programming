#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(5);
  for (int i = 0; i < 5; i++) {
    cin >> a[i];
  }

  for (int i = 1; i < 5; i++) {
    if (a[i - 1] == a[i]) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
}