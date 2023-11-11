#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generatePattern(int n) {
    vector<vector<int>> result;

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            result.push_back({1});
        } else {
            vector<int> prevLine = result[i - 1];
            vector<int> currentLine;
            int count = 1;

            for (int j = 1; j < prevLine.size(); ++j) {
                if (prevLine[j] == prevLine[j - 1]) {
                    count++;
                } else {
                    currentLine.push_back(count);
                    currentLine.push_back(prevLine[j - 1]);
                    count = 1;
                }
            }

            currentLine.push_back(count);
            currentLine.push_back(prevLine.back());
            result.push_back(currentLine);
        }
    }

    return result;
}

void printPattern(const vector<vector<int>>& pattern) {
    for (const auto& line : pattern) {
        for (int num : line) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    vector<vector<int>> pattern = generatePattern(n);
    printPattern(pattern);

    return 0;
}
