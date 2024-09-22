#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, x;
  cin >> n;
  stack<int> a;

  rep(_, n) {
    cin >> x;
    a.push(x);
  }

  rep(_, n - 1) {
    cout << a.top() << ' ';
    a.pop();
  }
  cout << a.top() << "\n";
}