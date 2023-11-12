#include <iostream>
#include <string>
using namespace std;


int main() {
    string expression = "1+2*5+3";
    int result = expression[0] - '0';
    for (int i = 1; i < expression.size(); i += 2) {
        if (expression[i] == '+') {
            result += expression[i + 1] - '0';
        } else if (expression[i] == '*') {
            result *= expression[i + 1] - '0';
        } else if (expression[i] == '/') {
            result /= expression[i + 1] - '0';
        } else {
            cout << "invalid expression";
        }
    }
    cout << result << endl;
}