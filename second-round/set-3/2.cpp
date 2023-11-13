#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> input = {13, 2, 4, 15, 12, 10, 5};
    vector<int> num;
    vector<int> odd;
    vector<int> even;
    for (int i = 0; i < input.size(); i++) {
        if (i % 2 == 0) {
            odd.push_back(input[i]);
        } else {
            even.push_back(input[i]);
        }
    }
    sort(odd.rbegin(), odd.rend());
    sort(even.begin(), even.end());
    int k = 0;
    while (k < odd.size() || k < odd.size()) {
        if (k < odd.size()) {
            cout << odd[k] << " ";
        }
        if (k < even.size()) {
            cout << even[k] << " ";
        }
        k++;
    }
    return 0;
}