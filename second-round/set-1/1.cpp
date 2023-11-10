#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  string str = "PROGRAM";
  for (int i = 0; i < str.size(); i++) {
    for (int j = 0; j < str.size(); j++) {
      if (i == j || i + j == str.size() - 1) {
        int k = max(i, j);
        if(i > ceil(str.size() / 2)) {
            k = j;
        };
        cout << str[k];
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}