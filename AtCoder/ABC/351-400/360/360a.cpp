#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  string s;
  cin >> s;

  if (s.find('R') < s.find('M')) {
    cout << "Yes" << "\n";
  } else {
    cout << "No" << "\n";
  }
}