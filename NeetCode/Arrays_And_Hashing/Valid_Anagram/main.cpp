#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(const string &s, const string &t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> s_letters, t_letters;

        for (char let : s) {
            ++s_letters[let];
        }

        for (char let : t) {
            ++t_letters[let];
        }

        for (auto [let, count] : s_letters) {
            if (t_letters.find(let) == t_letters.end() || t_letters[let] != count) {
                return false;
            }
            t_letters.erase(let);
        }

        return t_letters.empty();
    }
};
