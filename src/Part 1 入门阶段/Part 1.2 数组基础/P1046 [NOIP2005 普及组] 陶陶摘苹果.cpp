#include <iostream>
using namespace std;

int main() {
  int apple_height[10];  // 存储苹果到地面的高度
  int max_reach;         // 陶陶把手伸直的最大高度
  int apple_count = 0;   // 可以摘到的苹果数目

  // 输入苹果到地面的高度
  for (int& i : apple_height) {
    cin >> i;
  }

  // 输入陶陶把手伸直的最大高度
  cin >> max_reach;

  // 遍历每个苹果的高度，判断是否能够摘到
  for (int i : apple_height) {
    if (max_reach + 30 >= i) {
      apple_count++;
    }
  }

  // 输出结果
  cout << apple_count << endl;

  return 0;
}
