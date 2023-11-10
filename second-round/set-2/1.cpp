#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myVec = {1, 2, 3, 4, 5, 6, 7};
    vector<int> asc(myVec.begin(), myVec.end());
    vector<int> des(myVec.begin(), myVec.end());
    sort(asc.begin(), asc.end(), [](int a, int b) {
        return a < b;
    });
    sort(des.begin(), des.end(), [](int a, int b) {
        return a > b;
    });
    int a = 0;
    int b = 0;
    for(int i = 0; i < myVec.size(); i++) {
        if(i % 2 == 0) {
            myVec[i] = des[a];
            a++;
        } else {
            myVec[i] = asc[b];
            b++;
        }
    }
    for(auto i: myVec) {
        cout << i << " ";
    }
    return 0;
}