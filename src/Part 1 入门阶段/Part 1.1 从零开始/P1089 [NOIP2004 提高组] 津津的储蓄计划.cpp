#include <iostream>

int main() {
  int savings = 0;       // 津津储蓄的金额
  int budget;            // 每个月的预算
  int totalSavings = 0;  // 年末津津手中的总金额

  for (int month = 1; month <= 12; ++month) {
    std::cin >> budget;
    savings += 300 - budget;  // 更新津津的储蓄金额

    if (savings < 0) {
      std::cout << -month << std::endl;  // 输出出现预算不够的月份
      return 0;
    }

    totalSavings += savings / 100 * 100;  // 将整百的金额存入妈妈那里
    savings %= 100;  // 更新津津手中的金额（不足一百的部分）
  }

  std::cout << totalSavings * 1.2 + savings
            << std::endl;  // 输出年末津津手中的总金额
  return 0;
}
