#include <iostream>
#include <limits>

int main() {
  int pencilCount, packQuantity, packPrice;
  int minCost = std::numeric_limits<int>::max();

  // 读取需要的铅笔数量
  std::cin >> pencilCount;

  // 遍历三种包装
  for (int i = 0; i < 3; ++i) {
    // 读取包装内铅笔的数量和价格
    std::cin >> packQuantity >> packPrice;

    // 计算购买该包装的铅笔所需花费，并更新最小花费
    int cost = (pencilCount + packQuantity - 1) / packQuantity * packPrice;
    minCost = std::min(minCost, cost);
  }

  // 输出最少需要花费的钱
  std::cout << minCost << std::endl;

  return 0;
}
