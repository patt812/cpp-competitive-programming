#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int r, g, b;
  string c;
  cin >> r >> g >> b >> c;
  vector<int> pen = {r, g, b};

  int i = 0;
  if (c == "Green") {
    i = 1;
  } else if (c == "Blue") {
    i = 2;
  }

  pen.erase(pen.begin() + i);
  cout << min(pen[0], pen[1]) << "\n";
}