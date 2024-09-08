#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  int ans = 0;
  for (int x : A) {
    for (int y : P) {
      if (x + y == S) {
        ans++;
      }
    }
  }
  cout << ans << "\n";
}