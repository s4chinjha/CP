#include <bits/stdc++.h>
using namespace std;

//Using Tortoise and Hare Algorithm
int lengthOfLoop(Node *head) {
    //two pointers

    Node* fast = head;
    Node* slow = head;

    //iterate

    while(fast != NULL && fast->next != NULL){

        //move
        slow = slow->next;
        fast = fast->next->next;
        //check if they are at same position
        //loop exists
        if(slow == fast){
            Node* meetingPoint = slow;
            Node* temp = fast;
            //counter to calculate length

            int cnt=1;

            while(temp->next != meetingPoint){
                temp = temp->next;
                cnt++;
            }

            return cnt;
        }
    }

    return 0;
}