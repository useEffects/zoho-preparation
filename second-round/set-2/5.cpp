#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr1 = {2, 4, 5, 6, 7, 9, 10, 13};
    vector<int> arr2 = {2, 3, 4, 5, 6, 7, 8, 9, 11, 15};
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < arr1.size() || j < arr2.size()) {
        if (i < arr1.size() && j < arr2.size()) {
            if (arr1[i] == arr2[j]) {
                ans.push_back(arr1[i]);
                i++;
                j++;
                continue;
            }
            if (arr1[i] < arr2[j]) {
                ans.push_back(arr1[i]);
                i++;
            } else {
                ans.push_back(arr2[j]);
                j++;
            }
        } else if (i < arr1.size()) {
            ans.push_back(arr1[i]);
            i++;
        } else {
            ans.push_back(arr2[j]);
            j++;
        }
    }
    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}