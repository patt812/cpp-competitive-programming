#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

bool hasN(int n, int target) {
  while (n > 0) {
    if (n % 10 == target) return true;
    n /= 10;
  }
  return false;
}

void call(int n) {
  int i = 0;
  while (i < n) {
    i++;
    if (i % 3 == 0 || hasN(i, 3)) {
      cout << i << ' ';
    }
  }
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int x;
  cin >> x;
  call(x);
}
