#include <iostream>
#include <string>
using namespace std;

bool isCyclic(int number) {
    string str_num = to_string(number);
    for (int i = 0; i < str_num.size(); i++) {
        string str_rotated = str_num.substr(i) + str_num.substr(0, i);
        int rotated = stoi(str_rotated);
        int factor = rotated / number;
        if (factor * number != rotated) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << isCyclic(142857);
    cout << endl;
    return 0;
}