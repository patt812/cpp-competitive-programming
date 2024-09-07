#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> after(0);

  K = N - K;
  int a;
  for (int i = 0; i < N; i++) {
    cin >> a;
    if (i < K) {
      after.push_back(a);
    } else {
      cout << a << " ";
    }
  }

  for (int i = 0; i < after.size(); i++) {
    cout << after.at(i) << " ";
  }
  cout << endl;
}