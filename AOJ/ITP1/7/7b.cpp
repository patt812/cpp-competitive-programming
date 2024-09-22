#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

int countCombinations(int n, int x) {
  int count = 0;
  for (int i = 1; i <= n - 2; ++i) {
    for (int j = i + 1; j <= n - 1; ++j) {
      int k = x - i - j;
      if (k > j && k <= n) {
        count++;
      }
    }
  }
  return count;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, x;
  while (cin >> n >> x) {
    if (n == 0 && x == 0) break;

    int result = countCombinations(n, x);
    cout << result << endl;
  }
}