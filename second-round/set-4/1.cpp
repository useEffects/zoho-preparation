#include <iostream>
using namespace std;

int main () {
    int start = 2;
    int end = 15;
    for(int i = start; i < end; i++) {
        if(i % 2 == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}