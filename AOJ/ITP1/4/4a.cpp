#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int a, b;
  cin >> a >> b;

  printf("%d ", a / b);
  printf("%d ", a % b);
  printf("%.5f\n", (double)a / b);
}