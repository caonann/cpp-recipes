#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
  int pivot = arr[high];
  int i = low - 1;
  for (int j = low; j < high; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);
  return i + 1;
}

/// @brief 快速排序
/// @param arr
/// @param low
/// @param high
void quicksort(vector<int> &arr, int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quicksort(arr, low, pi - 1);
    quicksort(arr, pi + 1, high);
  }
}

int main() {
  vector<int> arr = {5, 2, 9, 1, 5, 6};
  quicksort(arr, 0, arr.size() - 1);
  for (int i : arr) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}