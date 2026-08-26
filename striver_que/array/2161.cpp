#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        

        //iterate over the array 
        //store less than first
        vi ans;
        for(int i =0;i<nums.size();i++){

            if(nums[i] < pivot){

                ans.push_back(nums[i]);
            }
        }
        for(int i =0;i<nums.size();i++){

            if(nums[i] == pivot){

                ans.push_back(nums[i]);
            }
        }
        for(int i =0;i<nums.size();i++){

            if(nums[i] > pivot){

                ans.push_back(nums[i]);
            }
        }

        return ans;


    }
};