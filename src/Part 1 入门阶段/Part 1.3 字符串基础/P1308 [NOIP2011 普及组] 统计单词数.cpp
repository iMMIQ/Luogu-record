#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  string targetWord, article;

  // 读取输入的单词和文章
  getline(cin, targetWord);
  getline(cin, article);

  // 将单词和文章转换为小写字母形式
  transform(targetWord.begin(), targetWord.end(), targetWord.begin(),
            ::tolower);
  transform(article.begin(), article.end(), article.begin(), ::tolower);

  // 在单词和文章的前后添加空格，以便在文章中精确匹配单词
  targetWord = " " + targetWord + " ";
  article = " " + article + " ";

  int wordCount = 0;                      // 统计单词出现次数
  size_t pos = article.find(targetWord);  // 查找单词在文章中第一次出现的位置

  if (pos == string::npos) {
    // 单词在文章中未找到
    cout << "-1" << endl;
  } else {
    // 统计单词在文章中的出现次数
    size_t p = pos;
    while (p != string::npos) {
      p = article.find(targetWord, p + 1);
      wordCount++;
    }

    cout << wordCount << " " << pos
         << endl;  // 输出结果：单词出现次数和第一次出现的位置
  }

  return 0;
}
