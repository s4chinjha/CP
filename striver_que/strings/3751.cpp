#include <bits/stdc++.h>
using namespace std;


        int totalWaviness(int num1, int num2) {
                //120 to 130
            string n1 = to_string(num1);
            string n2 = to_string(num2);
            int s1 = n1.size();
            int s2 = n2.size();

            //outer loop to go at
            //al the number in b/w

            int cnt=0;

            if(s1 < 3 && s2 < 3){
                return 0;
            }

            int i = num1;
                if(s1 <= 2 && s2 >=3){
                    i = 100;
                }

            while(i<=num2){

                //edge case



                //iterate over number to check for valleys or peak

                string s = to_string(i);
                int sz = s.size();
                for(int j =1;j<sz-1;j++){

                    int ch = s[j]-'0';
                    int lo = s[j-1]-'0';
                    int hi = s[j+1]-'0';

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

int main(){
    
    cout << totalWaviness(981,1000); 
    return 0;
}