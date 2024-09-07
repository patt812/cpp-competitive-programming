#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int i = 0;
  string ans = "A:";
  while (i < A) {
    ans += "]";
    i++;
  }
  cout << ans << endl;

  i = 0;
  ans = "B:";
  while (i < B) {
    ans += "]";
    i++;
  }
  cout << ans << endl;
}
