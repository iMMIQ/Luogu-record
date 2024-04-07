#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> sum(n + 1);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 1; i <= n; ++i) {
    sum[i] = (sum[i - 1] + a[i - 1]) % 7;
  }
  int ans = 0;
  for (int i = 0; i < 7; ++i) {
    int l = find(sum.begin(), sum.end(), i) - sum.begin();
    int r = find(sum.rbegin(), sum.rend(), i).base() - sum.begin() - 1;
    ans = max(ans, r - l);
  }
  cout << ans << endl;
  return 0;
}