#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int a, b;
  char op;

  while (1) {
    cin >> a >> op >> b;
    switch (op) {
      case '+':
        cout << a + b << "\n";
        break;
      case '-':
        cout << a - b << "\n";
        break;
      case '*':
        cout << a * b << "\n";
        break;
      case '/':
        cout << a / b << "\n";
        break;
      default:
        return 0;
    }
  }
}