#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

bool isPerfectSquare(int num) {
    int sqrtNum = static_cast<int>(sqrt(num));
    return (sqrtNum * sqrtNum == num);
}

bool isMultipleOf4(int num) {
    int divNum = static_cast<int>(num / 4);
    return divNum * 4 == num;
}

bool isDivisibleby6(int num) {
    int mulNum = static_cast<int>(num / 6);
    return mulNum * 6 == num;
}

int main() {
    vector<int> myVector = {10, 36, 54, 89, 12};
    vector<int> ans(myVector.size());
    for (int i = 0; i < myVector.size(); i++) {
        int weight = 0;
        if (isPerfectSquare(myVector[i])) {
            weight += 5;
        }
        if (isMultipleOf4(myVector[i]) && isDivisibleby6(myVector[i])) {
            weight += 4;
        }
        if (myVector[i] % 2 == 0) {
            weight += 3;
        }
        ans[i] = weight;
    }
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << "\t" << ans[i] << "\n";
    }
    return 0;
}