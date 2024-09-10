#include <bits/stdc++.h>
using namespace std;

// Determine is a <= c <= b (24 hour)
bool isIn24HourRange(int a, int b, int c) {
  a = (a - c + 24) % 24;
  b = (b - c + 24) % 24;

  return a > b;
}