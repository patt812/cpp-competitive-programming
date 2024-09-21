#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int a, b, c;
  cin >> a >> b >> c;

  vector<int> srt = {a, b, c};
  sort(srt.begin(), srt.end());

  rep(i, 3) {
    if (i > 0) cout << " ";
    cout << srt[i];
  }
  cout << "\n";
}
