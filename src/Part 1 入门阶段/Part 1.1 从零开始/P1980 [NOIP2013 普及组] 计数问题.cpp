#include <iostream>
using namespace std;

// 计算数字x在整数n中出现的次数
int countOccurrences(int n, int x) {
  int count = 0;
  while (n) {
    if (n % 10 == x) {
      count++;
    }
    n /= 10;
  }
  return count;
}

int main() {
  int n, x, totalOccurrences = 0;
  cin >> n >> x;

  for (int i = 1; i <= n; ++i) {
    totalOccurrences += countOccurrences(i, x);
  }

  cout << totalOccurrences << endl;
  return 0;
}
