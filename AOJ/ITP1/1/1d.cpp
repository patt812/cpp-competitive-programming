#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int s;
  cin >> s;
  printf("%d:%d:%d\n", s / 3600, (s % 3600) / 60, ((s % 3600) % 60) % 60);
}