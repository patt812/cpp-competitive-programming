#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;
constexpr auto npos = string::npos;

struct Dice {
  vector<int> faces;
  enum Face { TOP = 0, FRONT = 1, RIGHT = 2, LEFT = 3, BACK = 4, BOTTOM = 5 };

  Dice() : faces(6, 0) {}
  Dice(const vector<int>& input) { rep(i, 6) faces.push_back(input[i]); }

  void rotate(vector<int>& dir) {
    rep(i, dir.size() - 1) { swap(faces[dir[i]], faces[dir[i + 1]]); }
  }

  void rotate(char dir) {
    // toward N:back E:right S:front W:left
    vector<int> ops;
    switch (dir) {
      case 'N':
      case 'Y':  // spin vertically
        ops = {BACK, TOP, FRONT, BOTTOM};
        rotate(ops);
        break;
      case 'E':
        ops = {RIGHT, TOP, LEFT, BOTTOM};
        rotate(ops);
        break;
      case 'S':
        ops = {BOTTOM, FRONT, TOP, BACK};
        rotate(ops);
        break;
      case 'W':
        ops = {LEFT, TOP, RIGHT, BOTTOM};
        rotate(ops);
        break;
      case 'X':  // spin horizontally
        ops = {LEFT, BACK, RIGHT, FRONT};
        rotate(ops);
        break;
    }
  }

  void rotate(string dir) {
    for (char op : dir) rotate(op);
  }

  void setTop(int wantTop) {
    if (faces[TOP] == wantTop) return;
    if (faces[LEFT] == wantTop || faces[RIGHT] == wantTop) rotate('X');
    while (faces[TOP] != wantTop) rotate('Y');
  }

  void setFront(int wantFront) {
    if (faces[FRONT] == wantFront) return;
    if (faces[TOP] == wantFront || faces[BOTTOM] == wantFront) rotate('Y');
    while (faces[FRONT] != wantFront) {
      rotate('X');
    }
  }

  bool isSame(vector<int>& another) {
    vector<string> rotations = {"", "N", "NN", "S", "E", "W"};
    for (string rot : rotations) {
      rep(i, 4) {
        Dice tmp = *this;
        tmp.rotate(rot);
        rep(k, i) tmp.rotate('X');
        if (tmp.faces == another) return true;
      }
    }
    return false;
  }

  int top() { return faces[TOP]; }
  int front() { return faces[FRONT]; }
  int right() { return faces[RIGHT]; }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  vector<int> dice(6);
  rep(i, 6) cin >> dice[i];
  Dice d1 = Dice(dice);

  dice.empty();
  rep(i, 6) cin >> dice[i];

  if (d1.isSame(dice)) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
}