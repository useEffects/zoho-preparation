#include <iostream>
#include <string>
#include <vector>

using namespace std;

char getChar(int digit) {
    return 'A' + digit - 1;
}

void generateWords(const string& digits, int index, string currentWord, vector<string>& result) {
    if (index == digits.size()) {
        result.push_back(currentWord);
        return;
    }

    char currentChar = getChar(digits[index] - '0');
    generateWords(digits, index + 1, currentWord + currentChar, result);

    if (index + 1 < digits.size() && digits[index] != '0') {
        int combinedDigit = stoi(digits.substr(index, 2));
        if (combinedDigit >= 10 && combinedDigit <= 26) {
            char combinedChar = getChar(combinedDigit);
            generateWords(digits, index + 2, currentWord + combinedChar, result);
        }
    }
}

int main() {
    string digits = "11112";
    vector<string> result;

    generateWords(digits, 0, "", result);

    for (const string& word : result) {
        cout << word << endl;
    }

    return 0;
}
