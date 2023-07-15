#include <iostream>

int main() {
  int targetSum, n = 1;  // 目标和，级数的项数
  std::cin >> targetSum;

  double currentSum = 1.0;  // 当前的和，初始化为第一项
  while (currentSum <= targetSum) {
    n++;                    // 增加项数
    currentSum += 1.0 / n;  // 添加新的项
  }

  std::cout << n << std::endl;  // 输出结果
  return 0;
}
