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

// Determine if the array is arithmetic sequences.
bool isArithmetic(const vector<int>& arr) {
  if (arr.size() < 2) {
    return false;
  }

  int diff = arr[1] - arr[0];
  for (size_t i = 2; i < arr.size(); ++i) {
    if (arr[i] - arr[i - 1] != diff) {
      return false;
    }
  }
  return true;
}