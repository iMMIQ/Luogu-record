#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  string title;         // 标题字符串
  getline(cin, title);  // 输入标题
  auto characterCount =
      title.length() -
      count(title.begin(), title.end(), ' ');  // 计算标题字符数（不含空格）
  cout << characterCount << endl;              // 输出标题字符数
  return 0;
}
