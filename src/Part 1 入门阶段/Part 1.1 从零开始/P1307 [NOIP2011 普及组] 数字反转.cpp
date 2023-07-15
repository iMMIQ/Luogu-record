#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  string number;
  cin >> number;

  if (number != "0") {
    // 移除字符串末尾的零
    number.erase(number.find_last_not_of('0') + 1);
  }

  // 反转数字
  reverse(number.begin() + (number.front() == '-'), number.end());

  // 输出反转后的数字
  cout << number << endl;

  return 0;
}
