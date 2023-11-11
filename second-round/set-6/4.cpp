#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + 3);
    reverse(nums.begin() + 3, nums.end());
    for (auto num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}