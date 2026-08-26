//attempt 1
class Solution {
public:
    int maxChar(string s) {
        unordered_map<char, int> mp;

        for (char ch : s) {
            mp[ch]++;
        }

        int ans = INT_MIN;

        for (auto& p : mp) {
            if (p.second > ans) {
                ans = p.second;
            }
        }

        return ans;
    }
    int minChar(string s) {

        unordered_map<char, int> mp;

        for (char ch : s) {
            mp[ch]++;
        }

        int ans = INT_MAX;

        for (auto& p : mp) {
            if (p.second < ans) {
                ans = p.second;
            }
        }

        return ans;
    }
    int beautySum(string s) {

        int n = s.length();
        string substr = "";
        int j = 0, beauty = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                string substr = s.substr(i, (j-i+1));
                beauty = maxChar(substr) - minChar(substr);
                ans += beauty;
            }
        }

        return ans;
    }
};
//attempt 2
class Solution {
public:
int i = 0;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        int n = candidates.size();
        vector<vector<int>> ans;

        for(int i = 0;i < n;i++){
            //base condn
            if(target/candidates[i] == 1 ){
                ans.push_back({});
                ans.push_back[i](candidates[i]);
            }
            else{
                int newTarget = target%candidates[i];
                return combinationSum(candidates,newTarget);
            }
        }

        return ans;

    }
};