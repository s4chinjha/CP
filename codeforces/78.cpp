#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
            
            int n = nums.size();

            vi ans = [];

            int subsets = 1<<n;
            for(int i = 0; i  < subsets-1){


                vi list = [];

                for(int i = 0;i < n;i++){

                    //check if the bit is set or not

                    if(nums[i]&(1<<i)){
                        list.add(nums[i]);
                    }

                }

                ans.add(list);
            }   

            return ans;

    }
};