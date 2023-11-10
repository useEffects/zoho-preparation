#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr1 = {2, 4, 5, 6, 7, 9, 10, 13};
    vector<int> arr2 = {2, 3, 4, 5, 6, 7, 8, 9, 11, 15};
    vector<int> ans;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            ans.push_back(arr1[i++]);
        } else if (arr1[i] > arr2[j]) {
            ans.push_back(arr2[j++]);
        } else {
            ans.push_back(arr1[i++]);
            j++;
        }
    }
    while (i < arr1.size()) {
        ans.push_back(arr1[i++]);
    }
    while (j < arr2.size()) {
        ans.push_back(arr2[j++]);
    }
    for (auto num : ans) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
