#include <bits/stdc++.h>
using namespace std;


bool asteroidsDestroyed(int mass, vector<int>& asteroids) {

	long long ans=mass;
    

    //two things 
    //mass of planet > mass of asteroid

	//sort the asteroids
    sort(asteroids.begin(),asteroids.end());

    for(int i =0;i<asteroids.size();i++){

    	if(mass >= asteroids[i]){

    		ans += asteroids[i];
    	}
    	else{
    		return false;
    	}
    }

    return true;

}

int main(){

	

	return 0;
}