#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  string s1, s2;
  cin >> s1;

  for (int i = 0; i < n - 2; i++) {
    cin >> s2;
    if (s1 == s2 && s1 == "sweet") {
      cout << "No" << "\n";
      return 0;
    }
    s1 = s2;
  }
  cout << "Yes" << "\n";
}