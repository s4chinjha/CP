//revise day1
#include<iostream>

int modify(int &a){
	a = a+10; return a;
}

int main(){
	int a; std::cin >> a;
	modify(a);
	std::cout << a;
	return 0;
}