#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string input) {
    stack<char> myStack;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '(') {
            myStack.push(input[i]);
        } else if (input[i] == ')') {
            myStack.pop();
        } else if (input[i] == '*' || input[i] == '/' || input[i] == '+' || input[i] == '-') {
            if (i == 0 || i == input.size() - 1) {
                return false;
            }
            if (!(input[i - 1] >= 'a' && input[i - 1] <= 'z' && input[i + 1] >= 'a' && input[i + 1] <= 'z')) {
                return false;
            }
        }
    }
    return myStack.empty();
}

int main() {
    string input1 = "(a+b)(a*b)";
    string input2 = "(ab)(ab+)";
    string input3 = "((a+b)";
    cout << isValid(input1) << endl;
    cout << isValid(input2) << endl;
    cout << isValid(input3) << endl;
}