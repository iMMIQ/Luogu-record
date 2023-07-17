#include <algorithm>
#include <chrono>
#include <iostream>
using namespace std;

// 将整数转换为指定位数的字符串，不足位数前面补零
string to(int num, int width) {
  string s = to_string(num);
  return string(width - s.length(), '0') + s;
}

// 判断日期是否回文
bool isPalindrome(const chrono::year_month_day& date) {
  string s = to(static_cast<int>(date.year()), 4) +
             to(static_cast<unsigned>(date.month()), 2) +
             to(static_cast<unsigned>(date.day()), 2);
  reverse(s.begin() + 4, s.end());
  return s.substr(0, 4) == s.substr(4, 4);
}

int main() {
  int startDate, endDate;
  cin >> startDate >> endDate;
  int count = 0;

  auto start = chrono::sys_days(chrono::year_month_day(
      chrono::year(startDate / 10000), chrono::month(startDate / 100 % 100),
      chrono::day(startDate % 100)));

  auto end = chrono::sys_days(chrono::year_month_day(
      chrono::year(endDate / 10000), chrono::month(endDate / 100 % 100),
      chrono::day(endDate % 100)));

  // 遍历日期范围内的每一天，并计算回文日期的数量
  while (start <= end) {
    if (isPalindrome(chrono::year_month_day(start))) {
      count++;
    }
    start++;
  }

  cout << count << endl;
  return 0;
}
