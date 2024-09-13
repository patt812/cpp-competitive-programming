#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  string x;
  cin >> x;

  while (x.back() == '0') x.pop_back();
  if (x.back() == '.') x.pop_back();
  cout << x << "\n";
}