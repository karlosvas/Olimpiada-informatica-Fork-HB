#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    string nums;
    cin >> nums;
    int sum = 0, mult = 1;
    for (size_t i = 0; i < nums.size(); i++) {
      sum += nums[i] - '0';
      mult *= nums[i] - '0';
    }
    if (sum == mult)
      cout << "1\n";
    else {
      cout << "0\n";
    }
  }
}