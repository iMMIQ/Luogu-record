#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int roadLength, numRegions;  // 马路长度和区域数量
  cin >> roadLength >> numRegions;
  vector<bool> trees(roadLength + 1, true);  // 存储树的向量，初始状态都为真
  while (numRegions--) {
    int start, end;  // 区域的起始点和终止点
    cin >> start >> end;
    for (int i = start; i <= end; ++i) {
      trees[i] = false;  // 将区域内的树设为假，表示移走
    }
  }
  auto remainingTrees =
      count(trees.begin(), trees.end(), true);  // 统计剩余的树木数量
  cout << remainingTrees << endl;
}
