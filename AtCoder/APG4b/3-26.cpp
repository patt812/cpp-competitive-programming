#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

struct Calculator {
  map<char, int> var;
  map<char, vector<int>> arr;

  vector<string> splitString(const string& str) {
    vector<string> result;
    stringstream ss(str);
    string word;
    while (ss >> word) {
      result.push_back(word);
    }
    return result;
  }

  int calc(const vector<string>& tmp, int i) {
    int val = var.contains(tmp[i][0]) ? var[tmp[i][0]] : stoi(tmp[i]);
    char op = tmp[i + 1][0];

    int num;
    while (op != ';' && i < tmp.size()) {
      num = var.contains(tmp[i + 2][0]) ? var[tmp[i + 2][0]] : stoi(tmp[i + 2]);

      if (op == '+') {
        val += num;
      } else {
        val -= num;
      }
      i += 2;
      op = tmp[i + 1][0];
    }
    return val;
  }

  void set_var(string order) {
    vector<string> tmp = splitString(order);
    char key = tmp[1][0];
    auto it = find(tmp.begin(), tmp.end(), "=");

    int i = (it != tmp.end()) ? distance(tmp.begin(), it) + 1 : -1;
    var[key] = calc(tmp, i);
  }

  void print_int(string order) {
    vector<string> tmp = splitString(order);
    cout << calc(tmp, 1) << "\n";
  }

  vector<int> stoarr(const vector<string>& tmp, int i) {
    char next = tmp[i + 1][0];
    int num = var.contains(tmp[i][0]) ? var[tmp[i][0]] : stoi(tmp[i]);
    vector<int> val = {num};

    while (next == ',') {
      i += 2;
      num = var.contains(tmp[i][0]) ? var[tmp[i][0]] : stoi(tmp[i]);
      val.push_back(num);
      next = tmp[i + 1][0];
    }
    return val;
  }

  vector<int> calc_arr(vector<int> a, char op, vector<int> b) {
    vector<int> ret(a.size());
    for (int i = 0; i < a.size(); i++) {
      if (op == '+') {
        ret[i] = a[i] + b[i];
      } else {
        ret[i] = a[i] - b[i];
      }
    }
    return ret;
  }

  void set_vec(string order) {
    vector<string> tmp = splitString(order);
    char key = tmp[1][0];
    vector<int> res;

    int i = 3;
    char next = tmp[i][0];
    while (next != '+' && next != '-') {
      if (tmp[i][0] == '[') {
        i++;
        res = stoarr(tmp, i);
        while (tmp[i][0] != ']') i++;
      } else if (arr.contains(tmp[i][0])) {
        res = arr[tmp[i][0]];
      }
      i++;
      next = tmp[i][0];
      if (next == ';') {
        arr[key] = res;
        return;
      }
    }

    vector<int> curr;
    char op;
    while (next != ';') {
      if (tmp[i][0] == '+' || tmp[i][0] == '-') {
        op = tmp[i][0];
      } else if (tmp[i][0] == '[') {
        i++;
        curr = stoarr(tmp, i);
        while (tmp[i][0] != ']') i++;
        res = calc_arr(res, op, curr);
      } else if (arr.contains(tmp[i][0])) {
        curr = arr[tmp[i][0]];
        res = calc_arr(res, op, curr);
      }
      i++;
      next = tmp[i][0];
    }
    arr[key] = res;
  }

  void print_vec(vector<int> vec) {
    cout << "[ ";
    for (int i = 0; i < vec.size(); i++) cout << vec[i] << ' ';
    cout << "]\n";
  }

  void handle_vec(string order) {
    vector<string> tmp = splitString(order);
    int i = 0;
    char next = tmp[i + 1][0];
    vector<int> ans;
    while (next != '+' && next != '-') {
      if (tmp[i][0] == '[') {
        i++;
        ans = stoarr(tmp, i);
        while (tmp[i][0] != ']') i++;
      } else if (arr.contains(tmp[i][0])) {
        ans = arr[tmp[i][0]];
      }
      i++;
      next = tmp[i][0];
      if (next == ';') {
        print_vec(ans);
        return;
      }
    }

    vector<int> curr;
    char op;
    while (next != ';') {
      if (tmp[i][0] == '+' || tmp[i][0] == '-') {
        op = tmp[i][0];
      } else if (tmp[i][0] == '[') {
        i++;
        curr = stoarr(tmp, i);
        while (tmp[i][0] != ']') i++;
        ans = calc_arr(ans, op, curr);
      } else if (arr.contains(tmp[i][0])) {
        curr = arr[tmp[i][0]];
        ans = calc_arr(ans, op, curr);
      }
      i++;
      next = tmp[i][0];
    }
    print_vec(ans);
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  cin.ignore();

  Calculator cl;

  string op;
  for (int i = 0; i < n; i++) {
    getline(cin, op);
    if (op.find("print_int") == 0) {
      cl.print_int(op);
    } else if (op.find("int") == 0) {
      cl.set_var(op);
    } else if (op.find("print_vec") == 0) {
      cl.handle_vec(op);
    } else if (op.find("vec") == 0) {
      cl.set_vec(op);
    }
  }
}