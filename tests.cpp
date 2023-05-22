#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "heap.h"

TEST_CASE("empty vector") {
  std::vector<int> data;
  heapsort(data);
  CHECK(data.empty());
}

TEST_CASE("one element") {
  std::vector<int> data = {42};
  heapsort(data);
  CHECK_EQ(data, std::vector<int>{42});
}

TEST_CASE("multiple elements") {
  std::vector<int> data = {4, 10, 3, 5, 1};
  heapsort(data);
  CHECK_EQ(data, std::vector<int>{1, 3, 4, 5, 10});
}

TEST_CASE("duplicate elements") {
  std::vector<int> data = {9, 4, 7, 1, 9, 3, 7};
  heapsort(data);
  CHECK_EQ(data, std::vector<int>{1, 3, 4, 7, 7, 9, 9});
}

TEST_CASE("descending order") {
  std::vector<int> data = {10, 8, 6, 4, 2};
  heapsort(data);
  CHECK_EQ(data, std::vector<int>{2, 4, 6, 8, 10});
}

TEST_CASE("ascending order") {
  std::vector<int> data = {1, 3, 5, 7, 9};
  heapsort(data);
  CHECK_EQ(data, std::vector<int>{1, 3, 5, 7, 9});
}
