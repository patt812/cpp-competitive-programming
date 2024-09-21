#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  vector<ll> a(n);

  ll sum = 0;
  rep(i, n) {
    cin >> a[i];
    sum += a[i];
  }

  sort(a.begin(), a.end());
  printf("%lld %lld %lld\n", a[0], a.back(), sum);
}