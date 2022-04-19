#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& data, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair

    int j = (int)data.size() - 1;

    for (int i = 0; i < j; i++) {
      while (i < j && data[i] + data[j] > sum)
        j--;
      if (i < j && data[i] + data[j] == sum) {
        return std::make_pair(i, j);
      }
    }

    return std::nullopt;
  }

}  // namespace assignment