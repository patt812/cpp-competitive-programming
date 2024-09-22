#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  vector<int> dic(26, 0);

  string s;
  while (getline(cin, s)) {
    for (char c : s) dic[tolower(c) - 'a']++;
  }

  rep(i, 26) printf("%c : %d\n", (char)i + 'a', dic[i]);
}
