#include <bits/stdc++.h>

using vi = vector<int>;

class Solution {
public:
    // function to solve the loop

    int solve(vi start1,vi duration1,vi start2,vi duration2) {

        // for the first loop
        // find the min
        int finish1 = INT_MAX;

        for (int i = 0; i < start1.size(); i++) {

            finish1 = min(finish1, start1[i]) + duration1[i];
        }

        // find the min
        int finish2 = INT_MAX;

        for (int i = 0; i < start2.size(); i++) {

            finish2 = min(finish2, max(start2[i], finish1)) + duration2[i];
        }

        return finish2;
    }
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {
        int land_water =
            solve(landStartTime,landDuration,waterStartTime,waterDuration);
        int water_land =
            solve(waterStartTime,waterDuration,landStartTime,landDuration);

        return min(land_water, water_land);
    }
};