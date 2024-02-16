#include <iostream>
#include <set>
using namespace std;

int main() {
  string anagrama;
  cin >> anagrama;

  int N;
  cin >> N;
  for (int n = 0; n < N; n++) {
    string num;
    cin >> num;

    for (size_t i = 0; i < anagrama.size(); i++) {
      if (num.find(anagrama[i]) == string::npos) {
        cout << "No\n";
        break;
      } else if (i == anagrama.size() - 1) {
        if (anagrama.size() == num.size())
          cout << "Anagrama\n";
        else
          cout << "No\n";
      }
    }
  }
  return 0;
}