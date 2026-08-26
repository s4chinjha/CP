#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        //I get a string = Input: s = "LVIII"
        //Output: 58
        //Explanation: L = 50, V= 5, III = 3.

        // I neeed to do is compare the strings as int 

        //i use stoi and then take a int num1 = 10 then a num2 = stoi(X)

        //just took a peek at tuf ans

        int res = 0;

        unordered_map<char , int > roman = {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };

        //ITERTAE  OVER THE string 

        for(int i =0;i<s.size() - 1;i++){

            //if there is a  smaller value than subtract otherwise add

            if(roman[s[i]]<roman[s[i+1]]){
                res -= roman[s[i]];
            }

            else{
                res += roman[s[i]];
            }

        }


        return res + roman[s.back()];


    }
};