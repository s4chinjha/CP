#include<bits/stdc++.h>
using namespace std;

//  30/12/25 Quest leetcode Array
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

    	n = nums.size();

    	vector<int> nums_final(2*n);

    	for(int i = 0;i < 2*n; i++){
    		if(i > n){
    			nums_final(i-n) = nums(i-n);
    		}
    		else
    			nums_final(i) = nums(i);
    	}
    	return nums_final;
        
    }
};


int main(){
	vector<int>& nums = {1,2,1};

	getConcatenation(nums);
	
}