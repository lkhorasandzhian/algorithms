#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int> &nums) {
        unordered_set<int> is_appeared;

        for (int num : nums) {
            if (is_appeared.find(num) != is_appeared.end()) {
                return true;
            }
            is_appeared.insert(num);
        }

        return false;
    }
};
