#include <iostream>
#include <unordered_set>
using namespace std;

int board1[9][9] = {{7, 9, 2, 1, 5, 4, 3, 8, 6},
                    {6, 4, 3, 8, 2, 7, 1, 5, 9},
                    {8, 5, 1, 3, 9, 6, 7, 2, 4},
                    {2, 6, 5, 9, 7, 3, 8, 4, 1},
                    {4, 8, 9, 5, 6, 1, 2, 7, 3},
                    {3, 1, 7, 4, 8, 2, 9, 6, 5},
                    {1, 3, 6, 7, 4, 8, 5, 9, 2},
                    {9, 7, 4, 2, 1, 5, 6, 3, 8},
                    {5, 2, 8, 6, 3, 9, 4, 1, 7}};

int board2[9][9] = {{5, 5, 5, 5, 5, 5, 5, 5, 5},
                    {5, 5, 5, 5, 5, 5, 5, 5, 5},
                    {5, 5, 5, 5, 5, 5, 5, 5, 5},
                    {5, 5, 5, 5, 5, 5, 5, 5, 5},
                    {5, 5, 5, 5, 5, 5, 5, 5, 5},
                    {5, 5, 5, 5, 5, 5, 5, 5, 5},
                    {5, 5, 5, 5, 5, 5, 5, 5, 5},
                    {5, 5, 5, 5, 5, 5, 5, 5, 5},
                    {5, 5, 5, 5, 5, 5, 5, 5, 5}};

bool isSudokuValid(int board[9][9]) {
    unordered_set<string> mySet;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int current = board[i][j];
            auto result1 = mySet.insert(to_string(board[i][j]) + " row " + to_string(i));
            auto result2 = mySet.insert(to_string(board[i][j]) + " column " + to_string(j));
            auto result3 = mySet.insert(to_string(board[i][j]) + " sub " + to_string(i / 3) + " - " + to_string(j / 3));
            if(!result1.second || !result2.second || !result3.second) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    cout << isSudokuValid(board1) << "\n";
    cout << isSudokuValid(board2) << "\n";
    return 0;
}