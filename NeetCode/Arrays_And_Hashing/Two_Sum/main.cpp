#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        std::map<int, int> storage;  // value -> index.

        int current;
        for (int i = 0; i < nums.size(); ++i) {
            current = nums[i];

            auto iter = storage.find(target - current);
            if (iter != storage.end()) {
                return {iter->second, i};
            }

            storage[current] = i;
        }
    }
};
