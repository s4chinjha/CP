#include <bits/stdc++.h>
using namespace std;

//chatgpt help taken
class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int special = 0;

        unordered_set<int> counted; // currently considered special
        unordered_set<int> seen;    // numbers already encountered
        unordered_set<int> bad;     // numbers found in multiple blocks

        for (int i = 0; i < nums.size(); i++) {

            // Start of a new block
            if (i == 0 || nums[i] != nums[i - 1]) {

                // This number already had a previous block
                if (seen.count(nums[i]) && !bad.count(nums[i])) {
                    special--;
                    bad.insert(nums[i]);
                    counted.erase(nums[i]);
                }

                // First block of this number
                else if (!seen.count(nums[i])) {
                    special++;
                    counted.insert(nums[i]);
                    seen.insert(nums[i]);
                }
            }
        }

        return special;
    }
};
