#include <iostream>
#include <stack>
#include <string>
using namespace std;

string helper(string expression) {
    string result = "";
    stack<char> myStack;
    for (int i = 0; i < expression.size(); i++) {
        if(expression[i] == '(') {
            myStack.push(i);
        } else if (expression[i] == ')' && !myStack.empty()) {
            myStack.pop();
        }
        result += expression[i];
    }
    while(!myStack.empty()) {
        result = result.erase(myStack.top(), 1);
        myStack.pop();
    }
    return result;
}

int main() {
    string input1 = "((abc)((de))";
    string input2 = "(((ab)";

    cout << "Input 1: " << input1 << endl;
    cout << "Output 1: " << helper(input1) << endl;

    cout << "Input 2: " << input2 << endl;
    cout << "Output 2: " << helper(input2) << endl;

    return 0;
}
