#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  vector<int> h(n);

  long long t = 0;
  for (int i = 0; i < n; i++) {
    cin >> h[i];
    while (h[i] > 0) {
      if (h[i] > 3) {
        t += ((h[i] / 5) * 3);
        h[i] %= 5;
      }

      while (h[i] > 0) {
        t++;
        h[i] -= (t % 3 == 0) ? 3 : 1;
      }
    }
  }
  cout << t << "\n";
}