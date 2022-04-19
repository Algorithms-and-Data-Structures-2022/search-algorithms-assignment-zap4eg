#include "assignment/linear_search_iterative.hpp"

namespace assignment {

  std::optional<int> LinearSearchIterative::Search(const std::vector<int>& arr, int search_elem) const {

    // Tips: итеративно пройдитесь по элементам массива

    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] == search_elem) {
        return i;
      }
    }

    return std::nullopt;
  }

}  // namespace assignment