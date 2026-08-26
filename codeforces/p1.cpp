#include<bits/stdc++.h>
using namespace std;


int main(){

	//Take input of weight of the watermelon
	int w;cin>>w;

	//edge case when w = 2

	if(w == 2){
		cout << "NO";
		return 0;
	}

	//checkif we can divide it in 2 even parts

	for(int i = 1;i <= 4;i++){
		int rem = w%(2*i);
		if(rem%2 == 0){

			cout << "YES";
			return 0;
		} 
	}
	cout << "NO";
	return 0;

}
