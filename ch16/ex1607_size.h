template <typename T, unsigned N>
constexpr unsigned SizeOfArray(const T (&arr)[N]) {
  return N;
}
