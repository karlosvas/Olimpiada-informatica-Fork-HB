#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  string res = "";
  while (N--) {
    string word;
    cin >> word;
    res += word;
  }
  cout << res.size() << "\n";
  return 0;
}