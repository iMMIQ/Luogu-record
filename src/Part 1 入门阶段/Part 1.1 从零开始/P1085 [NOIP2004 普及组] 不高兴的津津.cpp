#include <iostream>

int main() {
  int mostUnhappyDay = 0;  // 最不高兴的一天
  int maxTotalHours = 8;   // 最多的上课小时数

  for (int day = 1; day <= 7; ++day) {
    int schoolHours, momHours;
    std::cin >> schoolHours >> momHours;

    int totalHours = schoolHours + momHours;  // 当天的总上课小时数

    if (totalHours > maxTotalHours) {
      maxTotalHours = totalHours;
      mostUnhappyDay = day;
    }
  }

  std::cout << mostUnhappyDay << std::endl;

  return 0;
}
