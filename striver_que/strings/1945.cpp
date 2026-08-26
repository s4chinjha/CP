#include <bits/stdc++.h>
using namespace std;

//11:53AM

//making a function for the repetitive part

int transform(string ans,int k){
	int num  = 0;string temp ="";

	while(k--){
		num = 0;
		for(int i = 0;i<ans.length();i++){
			char ch = ans[i];
			num = num + (ch-'0');
			temp =  to_string(num);
		}

		ans = temp;	
		temp = "";
	} 


	return num;
}
int getLucky(string s, int k) {
    

    //given a string
	//convert each char into the 
	//num i.e a -> 1

	string ans = "";
	for(char ch:s){

		int t;

		t= ch-'a'+1;

		ans += to_string(t);
	}
	
	
		int res = transform(ans,k);
	
	
	return res;

}

int main(){
	string s;cin>>s;int k;cin>>k;

	cout<<getLucky(s,k);

	return 0;
}