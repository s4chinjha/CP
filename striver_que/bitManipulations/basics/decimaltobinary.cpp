#include <bits/stdc++.h>
using namespace std;


string decimaToBinary(int dec) {
    

    //convert decimal to binary

    string bin = "";

    while(dec != 1){

        //store the remainder
        if(dec%2 == 1) bin += "1";
        else
            bin += "0";
        dec = dec/2;
    }
    return bin;

}

int main() {
    int n;
    cin >> n;
    cout << decimaToBinary(n);
}