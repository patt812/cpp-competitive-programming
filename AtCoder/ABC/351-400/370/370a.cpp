#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  bool l, r;
  cin >> l >> r;
  if (l && !r)
    cout << "Yes" << "\n";
  else if (!l && r)
    cout << "No" << "\n";
  else
    cout << "Invalid" << "\n";
}