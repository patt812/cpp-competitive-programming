#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  int ans = 0;
  while (1) {
    sort(A.begin(), A.end(), greater());
    if (A.at(0) == 0 || A.at(1) == 0) {
      cout << ans << endl;
      return 0;
    }

    A.at(0)--;
    A.at(1)--;
    ans++;
  }
}