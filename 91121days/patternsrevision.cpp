//12 Oct 2025 {11:00- :}
#include<bits/stdc++.h>
using namespace std;

void p1(int n){
	for(int i=0;i<n;i++){
		//For space
		for(int j=0;j<n-i;j++){
			cout << " ";
		}
		//Stars
		for(int j=0;j< (2*i)+1;j++){
			cout << "*";
		}
		//Space
		for(int j=0;j< n-i;j++){
			cout << " ";
		}
		cout << endl;

	}
	
}
void p2(int n){
	for(int i=0;i<n;i++){
		//space
		for(int j=0;j<=i;j++){
			cout << " ";
		}
		//stars
		for(int j=0;j< (2*n-(2*i+1));j++){
			cout << "*";
		}
		for(int j=0;j<=i;j++){
			cout <<" ";
		}
		cout << endl;
	}
}
void p3(int n){
	//outer loop
	for(int i=1;i<=n;i++){
		//inner loop
		for(int j=1;j<=i;j++){
			cout << j;
		}cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	p3(n);
	return 0;
}