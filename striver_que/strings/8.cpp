class Solution {
public:
    int myAtoi(string s) {
        
        int n = s.length();
        long long d = 0 ;
        int sign = 1;
        string ans = "";
        bool signSeen = false;
        //ignore any " "

        for(char ch:s){

            if(ch == ' ' && ans == ""){
                continue;
            }
        //check for signs "+" or "-"
            if(ch == '-' && ans == "" && signSeen == false){
                sign = -1;
                signSeen = true;
                continue;
            }
            else if(ch == '+' && ans == "" && signSeen == false){
                signSeen = true;
                continue;
            }
        //skip leading 0
        if(ch == '0'  && ans == ""){
            continue;
        }
    //if digit encountered add to the answer else return 0
        if(isdigit(ch)){
            ans += ch;
        }
        else{
            break;
        }
        }
        if(ans != "")
            d = stoi(ans);
        else
            return 0;
        
         if(sign ==  -1) d = (-1)*d;
        if (d > INT_MAX)
            return INT_MAX;

        if (d < INT_MIN)
            return INT_MIN;

            return d;
    }
};