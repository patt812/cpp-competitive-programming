#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  char a, b, c;
  cin >> a >> b >> c;

  map<char, int> ages = {{'A', 3}, {'B', 3}, {'C', 3}};

  ages[a == '<' ? 'A' : 'B']--;
  ages[b == '<' ? 'A' : 'C']--;
  ages[c == '<' ? 'B' : 'C']--;

  vector<pair<int, char>> ageList;
  for (auto& p : ages) {
    ageList.push_back({p.second, p.first});
  }
  sort(ageList.begin(), ageList.end());

  cout << ageList[1].second << endl;
}