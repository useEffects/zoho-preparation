#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string input = "input";
    for (int i = 0; i < input.size(); i++) {
        for (int j = i; j < input.size(); j++) {
            cout << input.substr(i, j - (i - 1)) << endl;
        }
    }
    return 0;
}