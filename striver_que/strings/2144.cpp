#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        //we take two candy get one free
        //free is the min(two candies taken)

        //find min cost to buy all


        //sort the cost

        sort(cost.begin(),cost.end());

        //loop from back

        int n = cost.size();int tot_cost=0;int cnt2=0;

        for(int i =n-1;i>0;i--){
        	

        	if(cnt2 != 0;){
        		tot_cost += cost[i];
        		cnt2--;
        	}
        	else{
        		cnt2=2;
        	}

        }
        return tot_cost;
    }
};

int main(){

	

	return 0;
}