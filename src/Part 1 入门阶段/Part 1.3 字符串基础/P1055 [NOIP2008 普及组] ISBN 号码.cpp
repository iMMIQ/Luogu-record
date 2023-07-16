#include <algorithm>  // 用于 erase_if 函数
#include <iostream>
#include <string>
using namespace std;

int main() {
  string isbn;
  cin >> isbn;

  // 从输入字符串中删除连字符
  isbn.erase(remove(isbn.begin(), isbn.end(), '-'), isbn.end());

  int sum = 0;
  for (int i = 0; i < 9; ++i) {
    sum += (i + 1) * (isbn[i] - '0');
  }

  // 检查计算得到的校验位是否与给定的校验位匹配
  int checkDigit = (isbn[9] == 'X') ? 10 : (isbn[9] - '0');
  if (checkDigit == sum % 11) {
    cout << "Right" << endl;
  } else {
    // 输出修正后的 ISBN 号码
    cout << isbn.substr(0, 1) << "-";
    cout << isbn.substr(1, 3) << "-";
    cout << isbn.substr(4, 5) << "-";
    cout << ((sum % 11 == 10) ? 'X' : static_cast<char>(sum % 11 + '0'))
         << endl;
  }

  return 0;
}
