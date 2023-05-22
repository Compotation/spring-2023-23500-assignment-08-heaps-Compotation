#include "heap.h"
#include<iostream>

int main() {
  std::vector<int> d1 = {10, 3, 5, -1};
  heapsort(d1);
  for (int val: d1) {
    std::cout << val << ", ";
  }
  std::cout << "\n";
  return 0;
}