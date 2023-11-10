#include <algorithm>
#include <iostream>
#include <vector>

int countGrandchildren(const std::vector<std::vector<std::string>>& relationships, const std::string& target) {
    int count = 0;
    for (const auto& rel : relationships) {
        if (rel[1] == target) {
            for (const auto& innerRel : relationships) {
                if (innerRel[1] == rel[0]) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    std::vector<std::vector<std::string>> myVec = {{"luke", "shaw"}, {"wayne", "rooney"}, {"rooney", "ronaldo"}, {"shaw", "rooney"}};
    int result = countGrandchildren(myVec, "ronaldo");
    std::cout << result << std::endl;

    return 0;
}
