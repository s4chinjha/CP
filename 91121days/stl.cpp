//c++ stl
#include<bits/stdc++.h>
using namespace std;

void explainpair(){
	pair<int,int> p ={10,14};
	cout << p.first;
}
void explainVector(){
	vector<int> v;
	v.push_back(1);
	v.emplace_back(2);
	/*vector<int>::iterator it = v.begin()//it points to the first element in the vector;
	it++; cout << *(it)<<endl;*/

	// v.rend()  v.rbegin() 
	// v.end() -->right after the memory location of the last element in the vector
	//v.back() --> The last element in the vector
	// we can use auto instead of vector<int>::iterator it = v.begin. We can simply 
	// use "auto it = v.begin();" The c++ automatically assign the 
	for(auto it : v){
		cout << it << " ";
	}
	// Erase function
	v.erase(v.begin()+1);
	//insert function
	//size,swap,clear,empty and a bunch of more just take a look at it hardly 1 min
}
void explainlist(){
	list<int>ls = {1,3,4,5};
	ls.push_front(3);
	ls.emplace_back(5);
	for(auto it:ls){
		cout << endl <<	it<< endl;
	}
}
void explaindeque(){
	deque<int> dq;
	//all the same functions can be peformed.
} 

void explainmap(){
	map<int,int>mpp={{4,6},{1,2},{3,4}};
	for(auto it : mpp){
		cout << it.first << " "<< it.second <<endl;
	}


}

//-->know basic maths	
	
int main(){
	explainpair();
	explainVector();	
	explainlist();
	explainmap();
	return 0;
}