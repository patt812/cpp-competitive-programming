#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int y;
  cin >> y;
  cout << ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0) ? 366 : 365) << "\n";
}