#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;
constexpr auto npos = string::npos;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int a, b;
  double C, S, L, h, c;
  cin >> a >> b >> C;

  const double PI = 3.1415926535897932;
  C = C * PI / 180.0;
  S = (a * b * sin(C)) / 2;
  h = (2 * S) / a;
  c = sqrt((a * a) + (b * b) - (2 * a * b * cos(C)));
  L = a + b + c;

  printf("%.5f\n", S);
  printf("%.5f\n", L);
  printf("%.5f\n", h);
}