#include "heap.h"

void heapify(std::vector<int> &data, int n, int i) {
  int largest = i;
  int left_child = 2 * i + 1;
  int right_child = 2 * i + 2;

  if (left_child < n && data[i] < data[left_child]) {
    largest = left_child;
  }

  if (right_child < n && data[largest] < data[right_child]) {
    largest = right_child;
  }

  if (largest != i) {
    std::swap(data[i], data[largest]);
    heapify(data, n, largest);
  }
}

void heapsort(std::vector<int> &data) {
  int n = data.size();

  for (int i = n / 2 - 1; i >= 0; i--) {
    heapify(data, n, i);
  }

  for (int i = n - 1; i > 0; i--) {
    std::swap(data[0], data[i]);
    heapify(data, i, 0);
  }
}
