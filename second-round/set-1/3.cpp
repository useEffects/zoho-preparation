#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string zoho = "WELCOMETOZOHOCORPORATION";
    vector<vector<char>> myVec(5, vector<char>(5));
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            int index = i * 5 + j;
            myVec[i][j] = zoho[index];
        }
    }
    // for (const auto &row : myVec) {
    //     for (char element : row) {
    //         cout << element << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - 2; j++) {
            if (myVec[i][j] == 'T' && myVec[i][j + 1] == 'O' && myVec[i][j + 2] == 'O') {
                cout << i << " " << j << "\n";
                cout << i << " " << j + 2;
            }
        }
    }
    for (int i = 0; i < 5 - 2; i++) {
        for (int j = 0; j < 5; j++) {
            if (myVec[i][j] == 'T' && myVec[i + 1][j] == 'O' && myVec[i + 2][j] == 'O') {
                cout << i << " " << j << "\n";
                cout << i + 2 << " " << j;
            }
        }
    }
    return 0;
}