//Pow(x,n)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	//works for +ve n raise to the power
    double myPow(double x, int n) {

    	double ans = 1;

    	long long temp = n;

        if(n<0){
        	long long temp= (-1)*(n);
        }

        for(int i = 0;i < temp;i++){
        	ans = ans*x;
        }
        if(n<0){
            long long answer = 1/ans;
        	return answer;
        }


        return ans;
    }
    //optimal
 	double myPow(double x, int n) {
 		double ans = 1.0;

 		long long nn = n;

 		if(nn<0){
 			nn = -1*nn;
 		}

 		while(nn>0){
 			//check if nn is odd
 			if(nn%2 == 1){
 				ans = ans*x;
 				nn = nn-1;
 			}
 			else{
 				x = x*x;
 				nn = nn/2;
 			}
 		}

 		if(n<0) {ans= (double)(1.0)/(double)ans;}

 		return ans;
 	}
};