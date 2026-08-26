#include <bits/stdc++.h>
using namespace std;

int earliestFinishTime(vector<int>& landStartTime,vector<int>& landDuration,vector<int>& waterStartTime, vector<int>& waterDuration) {

        // all possible cases

        int n = landStartTime.size();
        int m = waterStartTime.size();
        int finishLand = 0;
        vector<int> timestored;

        // land first water second
        for (int i = 0; i < n; i++) {

            finishLand = landStartTime[i] + landDuration[i];

            // going for the water ride
            for (int j = 0; j < m; j++) {

            	finishLand = landStartTime[i] + landDuration[i];

                if (finishLand >= waterStartTime[j]) {

                    finishLand += waterDuration[j];
      
                } else {
                    finishLand = waterStartTime[j] + waterDuration[j];

                }
                timestored.push_back(finishLand);
            }
        }
        int finishWater = 0;
        // water first land  second
        for (int i = 0; i < m; i++) {

            finishWater = waterStartTime[i] + waterDuration[i];

            // going for the water ride
            for (int j = 0; j < n; j++) {

            	finishWater = waterStartTime[i] + waterDuration[i];

                if (finishWater >= landStartTime[j]) {

                    finishWater += landDuration[j];
                    
                } else {

                    finishWater = landStartTime[j] + landDuration[j];

                }


                timestored.push_back(finishWater);
            }
        }

        return *min_element(timestored.begin(), timestored.end());
    }

vector<int> readVector() {
    string line;
    getline(cin, line);

    stringstream ss(line);
    vector<int> v;
    int x;

    while (ss >> x) {
        v.push_back(x);
    }

    return v;
}
int main(){

    vector<int> landStartTime = readVector();
    vector<int> landDuration = readVector();
    vector<int> waterStartTime = readVector();
    vector<int> waterDuration = readVector();

	cout << earliestFinishTime(landStartTime,landDuration,waterStartTime,waterDuration);

	
	return 0;

}