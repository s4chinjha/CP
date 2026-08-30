#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int j = 0;int special = 0;
        unordered_set<int> counted;vector<int> freq(100);unordered_map<int, int> count;
        for (int i = 0; i < nums.size() - 1; i++) {
            j = i + 1;

            //.. +1
            if (nums[j] == nums[i] && !counted.contains(nums[j])){
                special++;
                counted.insert(nums[j]);
            }
            //count is used instead of contains
            else if(nums[j] != nums[i] && counted.contains(nums[j] )){
                special--;
            }


            // j++;
        }
        //count the ocurrences
        for(int n:nums){
            count[n]++;
        }
        // +1
        for(const auto& p:count){
            if(p.second == 1){
                special++;
            }
        }
        return special;
    }
};
