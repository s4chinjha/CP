#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {

        int time = 0;
        int current = 0;
        int idx = 0;

        // when they are not equal
        while (idx < n - 1) {

            if (current < requests[idx]) {
                int up = requests[idx] - current;
                current += up;
                time += up;
            } else if (current > requests[idx]) {
                int down = current - requests[idx];
                current -= down;
                time += down;
            }
            idx++;
        }
        

        // when euqal skip to next

        return time;
    }
};

int main() {
    vector<int> requests = {0,1};
    int n = requests.size();

    Solution obj;

    int ans = obj.elevatorRequests(n, requests);

    cout << ans << endl;

    return 0;
}