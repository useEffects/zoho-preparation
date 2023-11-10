#include <iostream>
using namespace std;
void findNThTermNumberSystem(int N) {
    if (N == 1 || N == 2) {
        cout << (N - 1) + 3;
        return;
    }
    N -= 1;
    findNThTermNumberSystem(N / 2);
    cout << ((N % 2) + 3);
}
int main() {
    int N = 6;
    findNThTermNumberSystem(N);
    cout << endl;
    return 0;
}