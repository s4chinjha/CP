#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        //size of fruits and baskets
        int n = fruits.size();

        //check the leftmost basket 
        //if it can hold the fruits or not

        int filled=0,unfilled=0;

        //store the idx of fruits -> basket
        //so we can pick right baskets
        for(int i=0;i<n;i++){

            //since constraint is small we can do brute

            for(j=0;j<n;j++){
                if(baskets[j] >= fruits[i]){
                    //mark that basket as filled -1
                    baskets[j] = -1;filled=1;
                    break;
                }
            }

            if(filled==0){
                unfilled++;
            }
        }

        return unfilled;
    }
};

int main(){

	Solution sol;

    for(int i=0;i<n;i++){
        cin >> fruits[i];
    }

    for(int i=0;i<n;i++){
        cin >> fruits[i];
    }

    cout << sol.numOfUnplacedFruits(fruits,baskets);

	return 0;
}''