#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  map<char, bitset<13>> cards = {
      {'S', bitset<13>()},
      {'H', bitset<13>()},
      {'C', bitset<13>()},
      {'D', bitset<13>()},
  };

  int n, x;
  cin >> n;

  char c;
  rep(_, n) {
    cin >> c >> x;
    cards[c].set(x - 1);
  }

  vector<char> suits = {'S', 'H', 'C', 'D'};
  for (char s : suits) {
    rep(i, 13) {
      if (!cards[s].test(i)) {
        cout << s << ' ' << i + 1 << endl;
      }
    }
  }
}