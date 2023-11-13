#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str = "50113";

    while (true) {
        int c = 0;
        if (str.size() == 1) {
            bool ans = stoi(str) == 1;
            cout << ans;
            return 0;
        }
        for (int i = 0; i < str.size(); i++) {
            c += str[i] - '0';
        }
        str = to_string(c);
    }

    return 0;
}