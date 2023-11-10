#include <iostream>
#include <string>
using namespace std;

string helper(string input) {
    string result = "";
    int j = 0;
    string num = "";
    char current;
    for (int i = 0; i < input.size(); i++) {
        if (!(input[i] >= 'a' && input[i] <= 'z')) {
            num += input[i];
        } else if (input[i] >= 'a' && input[i] <= 'z') {
            current = input[i];
        }
        if (i == input.size() - 1 || !(isdigit(input[i + 1]))) {
            for (int k = 0; k < stoi(num); k++) {
                result += current;
            }
            num = "";
        }
    }
    return result;
}

int main() {
    string input1 = "a1b10";
    string input2 = "b3c6d15";
    cout << helper(input1) << endl;
    cout << helper(input2) << endl;
    return 0;
}
