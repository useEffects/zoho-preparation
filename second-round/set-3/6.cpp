#include <iostream>
#include <vector>
using namespace std;

void reverseString(string& str, int start, int end) {
    if (start >= end) {
        return;
    }
    swap(str[start], str[end]);
    reverseString(str, start + 1, end - 1);
}

void reverseWordsInString(string& str, int start) {
    int end = start;
    while (end < str.size() && str[end] != ' ') {
        end++;
    }
    reverseString(str, start, end - 1);
    if (end < str.size()) {
        reverseWordsInString(str, end + 1);
    }
}

int main() {
    string input = "I love india";
    reverseString(input, 0, input.size() - 1);
    reverseWordsInString(input, 0);
    cout << input << endl;
    return 0;
}
