#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);

  int sum = 0;
  for (int i = 0; i < N; i++) {
    int s;
    cin >> s;
    A.at(i) = s;
    sum += s;
  }

  int ave = sum / N;
  for (int i = 0; i < N; i++) {
    int x = A.at(i) - ave;
    if (x < 0) {
      x *= -1;
    }
    cout << x << endl;
  }
}