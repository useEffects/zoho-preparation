#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str = "geeksforgeeks";
    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < str.size(); j++) {
            if (i == j) {
                cout << str[i];
            } else if (i + j == str.size() - 1) {
                cout << str[j];
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}