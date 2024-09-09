#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int N, M;
  cin >> N >> M;
  vector<vector<char>> tier(N, vector<char>(N, '-'));
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A[i] >> B[i];
  }

  for (int i = 0; i < M; i++) {
    tier[A[i] - 1][B[i] - 1] = 'o';
    tier[B[i] - 1][A[i] - 1] = 'x';
  }

  for (auto& i : tier) {
    for (auto j = i.begin(); j != i.end(); ++j) {
      cout << *j;
      if (j != i.end() - 1) {
        cout << ' ';
      }
    }
    cout << "\n";
  }
}