#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int a, b, c;
  cin >> a >> b >> c;

  if (a < b && a < c && b < c) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
}