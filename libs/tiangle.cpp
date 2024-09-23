#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;

#include "circle.cpp"

// Returns area of the triangle by using bottom, height
double surface(double height, double bottom) { return (height * bottom) / 2; }

// Returns area of the triangle by using the law of cosines
double surface(double a, double b, double c_degree) {
  double c_rad = toRAD(c_degree);
  return (a * b * sin(c_rad)) / 2;
}

// Returns area of the triangle by using Heron's formula
double surface(double a, double b, double c) {
  double s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Calculate the length of a side by using law of sines
double side(double a, double b, double c_degree) {
  double c_rad = toRAD(c_degree);
  double c = (a * a) + (b * b) - (2 * a * b * cos(c_rad));
  return sqrt(c);
}

// Calculate the length of the height of triangle
// By swapping bottom to height, it can be determined bottom
double height(double surface, double bottom) { return (2 * surface) / bottom; }

// Calculate the perimeter of the triangle
double perimeter(double a, double b, double c) { return a + b + c; }