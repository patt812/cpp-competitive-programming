#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  unordered_map<int, int> c;
  int max_cnt = 0;
  int max_val = 0;

  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    c[x]++;

    if (c[x] > max_cnt) {
      max_cnt = c[x];
      max_val = x;
    }
  }

  cout << max_val << " " << max_cnt << endl;
}