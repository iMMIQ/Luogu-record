#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>
using namespace std;

int main() {
  // 读取输入
  int n;
  cin >> n;
  vector<string> numbers(n);
  for (auto &number : numbers) {
    cin >> number;
  }

  // 按照特定规则排序
  ranges::sort(numbers,
               [](const auto &a, const auto &b) { return a + b > b + a; });

  // 输出结果
  for (const auto &number : numbers) {
    cout << number;
  }
  return 0;
}
