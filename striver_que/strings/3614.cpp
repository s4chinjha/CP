class Solution {
public:
    string copyString(string ans){
        if(ans == "")return "";
        string ans1 = "";


        ans1 = ans;
        ans1 += ans;
        return ans1;    
    }
    char processStr(string s, long long k) {        
        if(s == "")return "";
        //lowerCase aplhabet append to ans
        int n = s.size();
        string ans = "";
        for(int i =0;i<n;i++){

            char ch = s[i];
            if(ch >= 'a' && ch <= 'z'){
                ans += ch;
            }
            else if(ans != "" && ch == '*'){
                ans.pop_back();
            }
            else if(ans != "" && ch == '#' ){
                ans = copyString(ans);
            }
            else if(ans != ""){
                reverse(ans.begin(),ans.end());
            }
        }
        return ans[k];
    }
};