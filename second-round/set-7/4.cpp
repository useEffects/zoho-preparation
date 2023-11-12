#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<char> keypad[] = {
    {'a', 'b', 'c'},
    {'d', 'e', 'f'},
    {'g', 'h', 'i'},
    {'j', 'k', 'l'},
    {'m', 'n', 'o'},
    {'p', 'q', 'r', 's'},
    {'t', 'u', 'v'},
    {'w', 'x', 'y', 'z'}};

vector<int> input = {2, 3, 4};
vector<string> result;
void backtrack(int i, string curStr) {
    if (curStr.size() == input.size()) {
        result.push_back(curStr);
        return;
    }
    for (auto c : keypad[i]) {
        backtrack(i + 1, curStr + c);
    }
}

int main() {
    backtrack(0, "");
    for (auto i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}