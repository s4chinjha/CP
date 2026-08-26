#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(1<=a && a<=1000 && 1<=b && b<=1000 && 1<=c && c<=1000){
		cout << a+b+c ;
	}
	else{
		cout << " error";
	}
}