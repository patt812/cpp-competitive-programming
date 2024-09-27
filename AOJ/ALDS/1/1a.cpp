#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;
constexpr auto npos = string::npos;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int v, j;
  for (int i = 1; i < n; i++)
  {
    rep(k, n - 1) cout << a[k] << ' ';
    cout << a[n - 1] << '\n';

    v = a[i];
    j = i - 1;
    while (j >= 0 && a[j] > v)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = v;
  }

  rep(k, n - 1) cout << a[k] << ' ';
  cout << a[n - 1] << '\n';
}