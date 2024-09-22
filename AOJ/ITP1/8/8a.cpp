#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  string s;
  getline(cin, s);

  for (char x : s) {
    if (isupper(x)) {
      cout << (char)tolower(x);
    } else {
      cout << (char)toupper(x);
    }
  }
  cout << "\n";
}
