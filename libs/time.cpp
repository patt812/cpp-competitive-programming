#include <bits/stdc++.h>
using namespace std;

// Determine is a <= c <= b (24 hour)
bool isIn24HourRange(int a, int b, int c) {
  a = (a - c + 24) % 24;
  b = (b - c + 24) % 24;
  return a > b;
}

// Determine if args is leap year
bool isLeapYear(int y) {
  return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

// Convert seconds to h:m:s
string secToHMS(int s) {
  // printf("%d:%d:%d\n", s / 3600, (s % 3600) / 60, ((s % 3600) % 60) % 60);
  return to_string(s / 3600) + ":" + to_string((s % 3600) / 60) + ":" +
         to_string(s % 60);
}

// Convert seconds to hh:mm:ss
string secToHHMMSS(int s) {
  // printf("%02d:%02d:%02d\n", s / 3600, (s % 3600) / 60, ((s % 3600) % 60) %
  // 60);
  char buffer[9];
  sprintf(buffer, "%02d:%02d:%02d", s / 3600, (s % 3600) / 60, s % 60);
  return string(buffer);
}