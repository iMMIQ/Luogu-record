#include <iostream>
using namespace std;

int main() {
  int n, row = 1, col = 1;  // 输入的整数N和表中的行列索引
  bool isUp = true;  // 用于表示方向，true表示向上，false表示向下
  cin >> n;          // 输入N的值
  while (--n) {      // 循环直到N减为0
    if (isUp) {
      row--;  // 向上移动一行
      col++;  // 向上移动一列
    } else {
      row++;  // 向下移动一行
      col--;  // 向下移动一列
    }
    if (row == 0) {
      row = 1;       // 边界处理：当行索引等于0时，将其重置为1
      isUp = false;  // 方向改为向下
    } else if (col == 0) {
      col = 1;      // 边界处理：当列索引等于0时，将其重置为1
      isUp = true;  // 方向改为向上
    }
  }
  cout << row << "/" << col << endl;  // 输出结果
  return 0;
}
