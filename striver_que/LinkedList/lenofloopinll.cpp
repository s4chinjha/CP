#include <bits/stdc++.h>
using namespace std;


int lengthOfLoop(Node *head) {
    // Write your code here

    //take a temp
    Node *temp = head;

    //take a hashmap
    unordered_map<Node*,int> visitedNode;

    //cnt
    int cnt = 1;

    //iterate over the linkedlist

    while( temp != NULL && temp->next != NULL){

        //check

        if(visitedNode.find(temp) != visitedNode.end()){
            return cnt- visitedNode[temp];
        }

        //store

        visitedNode[temp] = cnt;

        //move

        temp = temp->next;
    }

    return 0;
}

int main() {

}