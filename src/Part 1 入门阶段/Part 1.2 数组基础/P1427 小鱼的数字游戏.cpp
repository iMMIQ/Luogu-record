#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers;  // 存储输入的数字序列
  int num;

  // 读取输入的数字序列，以 0 结束
  while (std::cin >> num && num != 0) {
    numbers.emplace_back(num);
  }

  std::reverse(numbers.begin(), numbers.end());  // 反转数字序列

  // 输出反转后的数字序列
  for (auto number : numbers) {
    std::cout << number << " ";
  }

  return 0;
}
