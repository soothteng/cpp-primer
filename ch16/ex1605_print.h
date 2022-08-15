#include <iostream>
template <typename T, unsigned N> void print_array(const T (&arr)[N]) {
  for (const auto &elem : arr) {
    std::cout << elem;
  }
  std::cout << std::endl;
}
