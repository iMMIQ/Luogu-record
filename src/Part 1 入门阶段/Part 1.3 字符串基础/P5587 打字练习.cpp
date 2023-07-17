#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string passage;
  vector<string> v;
  int total_chars = 0, elapsed_time = 0;

  // 读入范文
  while (getline(cin, passage) && passage != "EOF") {
    string temp;
    for (auto c : passage) {
      if (c == '<') {
        for (int i = temp.length() - 1; i >= 0; --i) {
          if (temp[i] != '<' && temp[i] != '>') {
            temp[i] = '>';
            break;
          }
        }
      } else {
        temp.push_back(c);
      }
    }
    v.emplace_back(temp);
  }

  // 计算准确率和打字速度
  string input;
  while (getline(cin, input) && input != "EOF") {
    if (elapsed_time >= v.size()) {
      continue;
    }

    string processed_input;
    for (auto c : input) {
      if (c == '<') {
        for (int i = processed_input.length() - 1; i >= 0; i--) {
          if (processed_input[i] != '<' && processed_input[i] != '>') {
            processed_input[i] = '>';
            break;
          }
        }
      } else {
        processed_input.push_back(c);
      }
    }

    const auto &passage_line = v[elapsed_time];
    auto passage_length = passage_line.length();
    auto input_length = processed_input.length();
    for (int i = 0, p = 0; i < passage_length && p < input_length; ++i, ++p) {
      while (passage_line[i] == '<' || passage_line[i] == '>') {
        i++;
      }
      while (processed_input[p] == '<' || processed_input[p] == '>') {
        p++;
      }
      if (passage_line[i] == processed_input[p]) {
        total_chars++;
      }
    }
    elapsed_time++;
  }

  int time_taken;
  cin >> time_taken;
  cout << (int)round(60.0 * total_chars / time_taken) << endl;

  return 0;
}
