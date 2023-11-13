#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int m = 4;
    int n = 2 * m - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(j == 0 || j == n - 1) {
                cout << m;
                continue;
            }
            if(i >= m) {
                cout << (i - 2);
            } else {
                cout << (m - i);
            }
        }
        cout << endl;
    }
    return 0;
}