#include <iostream>

int main() {
  int yuan, jiao;
  std::cin >> yuan >> jiao;
  int totalJiao = yuan * 10 + jiao;   // 将元转换为角并与角相加
  int numberOfPens = totalJiao / 19;  // 计算最多能买多少只签字笔
  std::cout << numberOfPens << std::endl;
  return 0;
}
