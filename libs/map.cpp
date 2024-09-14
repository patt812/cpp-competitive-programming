#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

// Calculate the most frequent value of Key-Value pair
pair<int, int> calculateMode(const vector<int>& numbers) {
  unordered_map<int, int> frequencyMap;
  int maxCount = 0;
  int modeValue = 0;

  for (int num : numbers) {
    frequencyMap[num]++;

    if (frequencyMap[num] > maxCount) {
      maxCount = frequencyMap[num];
      modeValue = num;
    }
  }

  return {modeValue, maxCount};
}
