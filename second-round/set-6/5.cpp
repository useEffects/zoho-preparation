#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int removeZero(int num) {
    string number = to_string(num);
    string temp = "";
    for (auto i : number) {
        if (i == '0') {
            continue;
        }
        temp += i;
    }
    return stoi(temp);
}

bool add(int a, int b) {
    return removeZero(a + b) == removeZero(a) + removeZero(b);
}
bool sub(int a, int b) {
    return removeZero(a - b) == removeZero(a) - removeZero(b);
}

int main() {
    int a = 105;
    int b = 108;
    cout << add(a, b) << endl;
    cout << sub(a, b) << endl;
    return 0;
}