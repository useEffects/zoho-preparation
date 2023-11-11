#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> dates = {{1, 10, 2005}, {10, 1, 2023}, {21, 7, 2004}, {4, 12, 2026}, {4, 10, 2005}, {10, 10, 2023}};

    for (int i = 0; i < dates.size() - 1; i++) {
        for (int j = 0; j < dates.size() - i - 1; j++) {
            if (dates[j][2] > dates[j + 1][2] ||
                (dates[j][2] == dates[j + 1][2] && dates[j][1] > dates[j + 1][1]) ||
                (dates[j][2] == dates[j + 1][2] && dates[j][1] == dates[j + 1][1] && dates[j][0] > dates[j + 1][0])) {
                swap(dates[j], dates[j + 1]);
            }
        }
    }

    for (auto date : dates) {
        for (auto i : date) {
            cout << i << "\t";
        }
        cout << endl;
    }

    return 0;
}
