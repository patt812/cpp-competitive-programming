#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  vector<int> x(3), y(3);
  vector<double> abc(3);

  cin >> x[0] >> y[0];
  for (int i = 1; i <= 2; i++) {
    cin >> x[i] >> y[i];
    abc[i - 1] = pow(abs(x[i] - x[i - 1]), 2) + pow(abs(y[i] - y[i - 1]), 2);
  }
  abc[2] = pow(abs(x[0] - x[2]), 2) + pow(abs(y[0] - y[2]), 2);

  sort(abc.begin(), abc.end());
  cout << (abc[0] + abc[1] == abc[2] ? "Yes" : "No") << "\n";
}