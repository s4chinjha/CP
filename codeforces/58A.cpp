#include <bits/stdc++.h>
using namespace std;

void solve1(){

	string s;cin>>s;

	int arr[5] = {0};

	int i=0;int success=0;

	while(i<s.size()){
		char st = s[i];
		
		if(st == 'h' && arr[0] == 0){
			arr[0]++;
		}else if(arr[0] == 1 && arr[1] == 0 && st == 'e'){
			arr[1]++;

		}else if(arr[1] == 1 && arr[2] == 0 && st == 'l'){

			arr[2]++;

		}else if(arr[2] == 1 && arr[3] == 0 && st == 'l'){

			arr[3]++;

		}else if(arr[3] == 1 && arr[4] == 0 && st == 'o'){

			arr[4]++;
			success=1;

		}		

		i++;
	}



	if(success == 1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}


int main(){

	solve1();
	

	return 0;
}