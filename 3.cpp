#include <bits/stdc++.h>
using namespace std;

int main(){
	// int i,j;
	

	// cin >> i >> j;
	

	// string num[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

	// for(int a = i; a<=j; a++){
	// 	if(a>=0 && a<=9){
	// 		cout << num[i] << "\n";
	// 	}else if(a%2 == 0){
	// 		cout << "even\n";
	// 	}else{
	// 		cout << "odd\n";
	// 	}
	// }
	// int last_digit,num,sum=0;
	// cin>>num;
	// while(num>0){
	// 	last_digit = num%10;
	// 	sum = sum+last_digit;
	// 	num = num/10;
		

	// }
	// cout << sum;


	int w; 
	cin >> w;
	if(w%2==0&&w>=1&&w<=1000){
		cout << "YES";
	}
	else{
		cout << "NO";
	}

}

