#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {


        vector<vector<int>> ans = grid;
        int k = 0,cs = 0;
        //rowhsift
        for(int i = 0;i < n;i++){
            k = rowShift[i];
            for(int j = 0;j < n;j++){
                int mvcell = (j-k+n)%n;
                ans[i][mvcell] = grid[i][j];
            }

        }

        grid = ans;
        //colshift
        for(int j = 0;j < n;j++){
            k = colShift[j];

            for(int i = 0;i < n;i++){
                int mvcell = (i-k+n)%n;
                ans[mvcell][j] = grid[i][j];
            }

        }

        return ans;
    }
};
