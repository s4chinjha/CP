#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ll = long long;

//12 min

    long long totalWaviness(long long num1, long long num2) {
            //120 to 130
        string n1 = to_string(num1);
        string n2 = to_string(num2);
        ll s1 = n1.size();
        ll s2 = n2.size();

        //outer loop to go at
        //al the number in b/w

        ll cnt=0;

        if(s1 < 3 && s2 < 3){
            return 0;
        }

        ll i = num1;
            if(s1 <= 2 && s2 >=3){
                i = 100;
            }

        while(i<=num2){

            //edge case
            //iterate over number to check for valleys or peak

            string s = to_string(i);
            ll sz = s.size();
            for(ll j =1;j<sz-1;j++){

                ll ch = s[j]-'0';
                ll lo = s[j-1]-'0';
                ll hi = s[j+1]-'0';

                //test

                // cout << lo << ch << hi <<endl;

                //peak
                if(ch > lo && ch > hi){

                    cnt++;
                }//valley
                else if(ch < lo && ch < hi){
                    cnt++;
                }
            }
            i++;
        }

        return cnt;
    }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout << totalWaviness(1276248,9495506); 
}