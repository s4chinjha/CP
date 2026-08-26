#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

class Solution {
public:
    int solve(int i,vi& nums,vi& dp){

        //base case
        if(i>=nums.size())
            return 0;

        //search the dp to find 
        if(dp[i] != -1)
            return dp[i];

        dp[i] = max(nums[i] + solve(i+2,nums,dp), //rob
            solve(i+1,nums,dp));//skip
        return dp[i]; 

    }
    int rob(vector<int>& nums) {
        
        vi dp(nums.size(),-1);
        return solve(0,nums,dp);
    }
};