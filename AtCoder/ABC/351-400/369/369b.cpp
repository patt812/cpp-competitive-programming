#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  vector<int> hand = {-1, -1};
  int ans = 0;
  int n, x;
  char s;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x >> s;
    int lr = s == 'R';
    if (hand[lr] != -1) ans += abs(hand[lr] - x);
    hand[lr] = x;
  }
  cout << ans << "\n";
}