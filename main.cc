#include <cassert>
#include <cstdio>
#include <iostream>
#include <vector>

int partition(std::vector<int> &arr, int low, int high) {
  int pivot = arr[high];
  int i = low - 1;
  for (int j = low; j < high; j++) {
    if (arr[j] < pivot) {
      i++;
      std::swap(arr[i], arr[j]);
    }
  }
  std::swap(arr[i + 1], arr[high]);
  return i + 1;
}

/// @brief 快速排序
/// @param arr
/// @param low
/// @param high
void quicksort(std::vector<int> &arr, int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quicksort(arr, low, pi - 1);
    quicksort(arr, pi + 1, high);
  }
}

int main() {
  std::vector<int> arr1 = {5, 2, 9, 1, 5, 6};
  quicksort(arr1, 0, arr1.size() - 1);
  assert(arr1 == std::vector<int>({1, 2, 5, 5, 6, 9}));

  std::vector<int> arr2 = {1, 2, 3, 4, 5};
  quicksort(arr2, 0, arr2.size() - 1);
  assert(arr2 == std::vector<int>({1, 2, 3, 4, 5}));

  std::vector<int> arr3 = {5, 4, 3, 2, 1};
  quicksort(arr3, 0, arr3.size() - 1);
  assert(arr3 == std::vector<int>({1, 2, 3, 4, 5}));

  std::vector<int> arr4 = {1};
  quicksort(arr4, 0, arr4.size() - 1);
  assert(arr4 == std::vector<int>({1}));

  std::vector<int> arr5 = {};
  quicksort(arr5, 0, arr5.size() - 1);
  assert(arr5 == std::vector<int>({}));

  std::cout << "All test cases passed." << std::endl;

  return 0;
}