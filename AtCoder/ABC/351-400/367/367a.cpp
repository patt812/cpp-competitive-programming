#include <iostream>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  A = (A - C + 24) % 24;
  B = (B - C + 24) % 24;

  cout << (A < B ? "Yes" : "No") << endl;
  return 0;
}