#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int a, b;
  cin >> a >> b;

  if (a == b) {
    cout << "a == b\n";
  } else if (a > b) {
    cout << "a > b\n";
  } else {
    cout << "a < b\n";
  }
}