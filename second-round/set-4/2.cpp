#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> input = {8, 2, 3, 12, 16};

int countFactors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            auto it = find(input.begin(), input.end(), i);
            if (it != input.end()) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    for (int i = 0; i < input.size() - 1; i++) {
        for (int j = 0; j < input.size() - i - 1; j++) {
            int countA = countFactors(input[j]);
            int countB = countFactors(input[j + 1]);
            if (countA < countB) {
                swap(input[j], input[j + 1]);
            }
        }
    }
    for (auto i : input) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
