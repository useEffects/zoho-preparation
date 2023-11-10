#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void helper(vector<int> nums) {
    for (int i = 0; i < nums.size() - 1; i += 2) {
        for (int j = i + 2; j < nums.size(); j += 2) {
            if (nums[i] < nums[j]) {
                swap(nums[i], nums[j]);
            }
        }
    }
    for (int i = 1; i < nums.size() - 2; i += 2) {
        for (int j = i + 2; j < nums.size(); j += 2) {
            if (nums[i] > nums[j]) {
                std::swap(nums[i], nums[j]);
            }
        }
    }
    for(auto num: nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> input1 = {13, 2, 4, 15, 12, 10, 5};
    vector<int> input2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    helper(input1);
    helper(input2);
    return 0;
}