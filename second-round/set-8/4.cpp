#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> arr1 = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
    vector<char> arr2 = {'a', 'b', 'd', 'e', 'e', 'g', 'g', 'i', 'i'};
    for (int i = 0; i < arr1.size(); i++) {
        if (arr1[i] != arr2[i]) {
            cout << arr1[i] << arr2[i] << endl;
        }
    }
}