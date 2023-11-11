#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solver(string input) {
    if (input.size() == 1) {
        return stoi(input) == 1;
    }
    int num = 0;
    for (auto i : input) {
        num += (i - '0');
    }
    return solver(to_string(num));
}

int main() {
    string input = "50112";
    cout << solver(input) << endl;
    return 0;
}