#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
class Solution {
public:


int left_sum(int idx,vi nums){

    int n = nums.size();
    int left_sum = 0;

    if(idx == 0){
        return 0;
    }
    for(int i = 0;i < idx;i++){

        left_sum += nums[i];

    }

    return left_sum;
}
int right_sum(int idx,vi nums){

    int n = nums.size();
    int right_sum = 0;

    if(idx == n-1){
        return 0;
    }
    for(int i = idx+1;i < n;i++){

        right_sum += nums[i];

    }

    return right_sum;
}

vector<int> leftRightDifference(vector<int>& nums) {

    int left = 0,right=0;
    int res = 0;int n =nums.size();
    vi ans;
    
    for(int i = 0;i < n;i++){

        //left sum 

        left = left_sum(i,nums);
        right = right_sum(i,nums);

        res = left-right;

        if(res<0){
            res *=  -1;
            ans.push_back(res);
        }
        else{
            ans.push_back(res);
        }

    }

    return ans;
}
};