#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  vector<vector<bool>> isPreparationNeeded(
      k,
      vector<bool>(m, false));  // 用于存储每天和每套题是否需要准备模拟赛的情况

  // 输入每个 OIer 在接下来的 k 天中的比赛安排
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      int day;
      cin >> day;
      isPreparationNeeded[day - 1][j] = true;  // 将对应的天和题目设置为需要准备
    }
  }

  // 统计每天需要准备的模拟赛场数
  for (auto &day : isPreparationNeeded) {
    auto preparations = count(day.begin(), day.end(), true);
    cout << preparations << " ";
  }

  return 0;
}
