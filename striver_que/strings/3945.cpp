#include <bits/stdc++.h>
using namespace std;


int digitFrequencyScore(int n) {
    

    //loop over the num and find the number of time each number appear

    //araay that scores the freq

    int freq[10];

    string s = to_string(n);int sum=0;

    for(int i =0;i<s.length();i++){
    	char ch = s[i];

    	sum = ch-'0';
    	freq[sum]++;
    }
    int ans=0;
    for(int i=0;i<10;i++){
    	ans += freq[i]*i;

    }

    return ans;


}

int main(){

	int n ;cin>>n;

	digitFrequencyScore(n);

	return 0;
}