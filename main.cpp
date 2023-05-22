#include "heap.h"
#include<iostream>

int main() {
  std::vector<int> d1 = {10, 3, 5, -1};
  std::cout << "unsorted:\n";
  for (int val: d1) {
    std::cout << val << ", ";
  }
  std::cout << "\n";
  std::cout << "sorted:\n";

  heapsort(d1);
  for (int val: d1) {
    std::cout << val << ", ";
  }
  std::cout << "\n";
  return 0;
}