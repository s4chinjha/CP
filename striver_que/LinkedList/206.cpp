#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

//brute-force

ListNode* reverseList(ListNode* head) {


    //put all the values in a stack and then change the 
    //value with the values in stacks as LIFO and it will
    //be reversed

    //create a stack 

    stack<int> st;

    //iterate over LL
    ListNode* temp = head;
    while(temp!=NULL){

        st.push(temp->val);

        temp = temp->next;
    }

    //filled the stack 

    //now empty the stack from above

    temp = head;

    while(temp!= NULL){

        temp->val = st.top();
        st.pop();

        temp = temp->next;

    }

    return head;
}

//optimized
//we use three pointer :
//prev temp front

ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* temp= head;

    //check for one or no elements
    while(head == NULL || head->next == NULL){
        return head;
    }    

    //rest of the cases
    while(temp!=NULL){
        ListNode* front = temp->next;

        temp->next = prev;

        prev = temp;

        temp = front;
    }

    return prev;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}