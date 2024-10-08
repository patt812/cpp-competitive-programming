#include <bits/stdc++.h>
using namespace std;

// Devides array
int partition(vector<int>& nums, vector<int>& indices, int left, int right) {
  int pivot = nums[indices[right]];
  int i = left;

  for (int j = left; j < right; ++j) {
    if (nums[indices[j]] > pivot) {
      swap(indices[i], indices[j]);
      ++i;
    }
  }
  swap(indices[i], indices[right]);
  return i;
}

// Select nth grater index
int quickSelect(vector<int>& nums, vector<int>& indices, int left, int right,
                int n) {
  if (left == right) {
    return indices[left];
  }

  int pivotIndex = partition(nums, indices, left, right);

  if (pivotIndex == n) {
    return indices[pivotIndex];
  } else if (pivotIndex < n) {
    return quickSelect(nums, indices, pivotIndex + 1, right, n);
  } else {
    return quickSelect(nums, indices, left, pivotIndex - 1, n);
  }
}

// Find nthh grater index
int findNthLargestIndex(vector<int>& nums, int n) {
  int size = nums.size();
  vector<int> indices(size);
  for (int i = 0; i < size; ++i) {
    indices[i] = i;
  }

  return quickSelect(nums, indices, 0, size - 1, n - 1);
}

// Sort array by selection sort
void insertionSort(vector<int>& a) {
  int n = a.size();
  for (int i = 1; i < n; i++) {
    int v = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > v) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = v;
  }
}

// Sort array by selection sort in descending order
void insertionSort(vector<int>& a, bool descending) {
  if (!descending) {
    insertionSort(a);
    return;
  }

  int n = a.size();
  for (int i = 1; i < n; i++) {
    int v = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] < v) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = v;
  }
}