#include <iostream>
#include <string>
using namespace std;

int main() {
    string string1 = "test123string";
    string string2 = "123";
    for (int i = 0; i < string1.size(); i++) {
        int j = 0;
        while (j < string2.size() && string1[i] == string2[j]) {
            i++;
            j++;
        }
        if (j == string2.size()) {
            cout << i - j << endl;
        }
    }
    return 0;
}