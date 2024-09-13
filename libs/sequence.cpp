#include <bits/stdc++.h>
using namespace std;

// Count patterns of arithmetic sequences with integers a and b
// NOTE: The sequences a, b are assumed to be arithmetic sequences.
int countArithmetic(int a, int b) {
  if (a == b) {
    return 1;
  } else if ((a + b) % 2 == 0) {
    return 3;
  } else {
    return 2;
  }
}
