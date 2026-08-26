#include<bits/stdc++.h>
using namespace std;
//10 aug 5:52pm 50min-1:22 min
//11 AUg 10:16AAM --> Till pattern 8
//12 OCT 25 --> Revisting to complete the remaining topics
//13 Oct 25 -->continue from pattern 17 1900Hours-

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "* ";
        }
        cout << endl;   
    }
}
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << "* ";
        }
        cout << endl;   
    }
}
void print3(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;   
    }
}
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void print7(int n){
    for(int i = 0;i < n; i++){
    // space
    for(int j = 0;j < n-i-1;j++){
        cout << " ";
    }
    //"*"
    for(int j = 0;j < 2*i+1;j++){
        cout << "*";
    }
    // space
    for(int j = 0;j < n-i-1;j++){
        cout << " ";
    }
    cout << endl;
}

}
void print8(int n){
    for(int i = 0;i < n; i++){
    // space
    for(int j = 0;j < i;j++){
        cout << " ";
    }
    //"*"
    for(int j = 0;j < 2*n-(2*i+1);j++){
        cout << "*";
    }
    // space
    for(int j = 0;j < i;j++){
        cout << " ";
    }
    cout << endl;
}
}
void print9(int n){
    //this is a combination of pattern no. 7 and 8
}
void print10(int n){
    for(int i=1;i<=(2*n-1);i++){
        //star
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout << endl;
                  
    }

}
void print11(int n){
    int start = 1;
        //outer loop
    for(int i=0;i<n;i++){
        //inner loop
        if(i%2==0) start=1; else start =0;
        for(int j=0;j<=i;j++){
            cout << start;
            start = 1-start;
        }cout << endl;
    }
}
void print12(int n){
    //outer loop
    int space = 2*(n-1);
    for(int i=1;i<=n;i++){
        //inner loop
        //nums
        for(int j=1;j<=i;j++){
            cout << j;
        }
        //space
        for(int j=1;j<=space;j++){
            cout << " ";
        }
        //nums
        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
        space -=2;
    }
}
void print13(int n){
    //outer loop
    int num = 1;
    for(int i=1;i<=n;i++){
        //inner loop
        for(int j=1;j<=i;j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
//my method
void print14(int n){
    //outer loop
    for(int i=0;i<n;i++){
        int alp = 'A';
        //outer loop
        for(int j=0;j<=i;j++){
            cout << char(alp) << " ";
            alp++;
        }cout << endl;
    }


}
//tuf method
void print14m2(int n){
    //outer loop
    for(int i=0;i<n;i++){
        //inner loop
        for(char ch ='A';ch<='A'+i;ch++){
            cout << ch << " " ;
        }cout << endl;
    }
}
//reverse of pattern 14
void print15(int n){
    //ol
    for(int i=0;i<n;i++){
        //il
        for(char ch = 'A'; ch <= 'A'+(n-i-1); ch++){
            cout << ch << " ";
        }cout << endl;
    }
}
void print16(int n){
  //ol
    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout << ch << " ";
        }cout << endl;
    }
}
void print17(int n){
    //ol
    for (int i = 0; i < n; ++i)
    {
        
    }
}
int main(){
    int n;
    cin >> n;
    print16(n);
    return 0;
}