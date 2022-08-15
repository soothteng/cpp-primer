template <typename InputIt, typename T>
InputIt Find(InputIt begin, InputIt end, const T &value) {
  for (; begin != end; ++begin) {
    if (*begin == value) {
      return begin;
    }
  }
  return end;
}
