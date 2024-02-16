#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  while (N--) {
    int r, a, v;
    cin >> r >> a >> v;
    int rupias_link = v + a * 42 + r * 42 * 42;

    int Q;
    cin >> Q;
    string res = "NO COMPRA";
    int max_cost = 0;

    while (Q--) {
      int cr, ca, cv;
      string obj;
      cin >> obj >> cr >> ca >> cv;
      int coste_obj = cv + ca * 42 + cr * 42 * 42;
      if (rupias_link >= coste_obj && coste_obj > max_cost) {
        res = obj;
        max_cost = coste_obj;
      }
    }
    cout << res << "\n";
  }
  return 0;
}