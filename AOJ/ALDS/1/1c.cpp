#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;
constexpr auto npos = string::npos;

bool isPrime(int n) {
  if (n == 2) return true;
  if (n < 2 || n % 2 == 0) return false;

  int i = 3;
  double sqrt_n = sqrt(n);
  while (i <= sqrt_n) {
    if (n % i == 0) return false;
    i = i + 2;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, x;
  cin >> n;

  int ans = 0;
  rep(_, n) {
    cin >> x;
    if (isPrime(x)) ans++;
  }

  cout << ans << '\n';
}