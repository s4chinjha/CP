#include <bits/stdc++.h>
using namespace std;


// void solve() {
//     //Min time taken to reach Elephant's Friend Home
//     int home;cin>>home;

//     int elephant = 0,step=0;
//     //elephant moves by 1,2,3,4,5

//     while(elephant != home){
//         if(home/5){
//             int quotient = home/5;
//             step += quotient;
//             home = home/5;
//             elephant += quotient;
//             cout << step;
//         }
//         else if(home/4){
//             int quotient = home/4;
//             step += quotient;
//             home = home/4;
//             elephant += quotient;
//         }
//         else if(home/3){
//             int quotient = home/3;
//             step += quotient;
//             home = home/3;
//             elephant += quotient;
//         }
//         else if(home/2){
//             int quotient = home/2;
//             step += quotient;
//             home = home/2;
//             elephant += quotient;
//             cout << step;
//         }
//         else{
//             int quotient = home/1;
//             step += quotient;
//             home = home/1;
//             elephant += quotient;
//             cout <<step;
//         }
//     }

//     cout << step;
// }

//brute
void solve1(){
    int home;cin>>home;
    int steps = 0;
    while(home>0){
        if(home>=5){
            home -= 5;
        }
        else if(home>=4){
            home -= 4;
        }
        else if(home >=3){
             home -= 3;
        }
        else if(home >= 2){
            home -= 2;
        }
        else{
            home -=1;
        }

        steps++;
    }

    cout << steps;
}
void solve2(){
    int home;cin>>home;
    int steps = 0;

    //for each time divided by 5 we get +1 for step and then 
    //+1 for the remainder

    //int steps = (home + 4) / 5; (optimized boss)

    int rem = home%5;
    int mult5 = home -rem;
    steps += mult5/5;
    if(rem>0){
        steps++;
    }

    cout << steps;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve2();
}