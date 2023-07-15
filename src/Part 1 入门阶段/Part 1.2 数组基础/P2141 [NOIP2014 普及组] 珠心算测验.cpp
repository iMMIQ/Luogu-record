#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int numIntegers, answer = 0;
  cin >> numIntegers;

  vector<int> integers(numIntegers);
  for (int i = 0; i < numIntegers; ++i) {
    cin >> integers[i];
  }

  for (int i = 0; i < numIntegers; ++i) {
    for (int j = 0; j < numIntegers; ++j) {
      // 检查是否存在不同的两个数，其和等于第三个数
      if (integers[j] * 2 != integers[i] &&
          find(integers.begin(), integers.end(), integers[i] - integers[j]) !=
              integers.end()) {
        answer++;
        break;
      }
    }
  }

  cout << answer << endl;
  return 0;
}
