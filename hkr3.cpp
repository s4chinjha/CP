#include <bits/stdc++.h>
using namespace std;
int main() {
	// int w; 
	// cin >> w;
	// if(w%2==0&&w>=1&&w<=1000){
	// 	cout << "YES";
	// }
	// else{
	// 	cout << "NO";
	// 	}
	int n = 1;
    for(n ; n < 100 ; ++n){
    if(n%3==0&&n%5==0){ 
        cout << "FizzBuzz" << endl;
    }
    else if (n%3==0) {
        cout << "Fizz" << endl;
    
    }
    else if(n%5 == 0){
        cout << "Buzz" << endl;
    }
    else{
        cout << n << endl;
    }
    }
    
    
    


		}
