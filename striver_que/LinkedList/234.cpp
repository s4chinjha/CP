#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    //wrong approach
    bool isPalindrome_1(ListNode* head) {
        //two pointers

        ListNode* lo = head;
        ListNode* hi = head;

        int low = 0;
        int high = 0;

        //move high to last 

        while(hi->next != NULL){
            hi=hi->next;
            high++;
        }

        //now lets move lo to the mid or until they cross over
        while(low<high){
            //check for pallindrome
            if(lo->val != hi->val){
                return false;
            }

            //move both 
            lo = lo->next;
            lo++;

            hi=hi->next;
            high--;
        }

        return true;
    }

    bool isPalindrome(ListNode* head){
        //iterate and store in a stack & 
        //then again iterate LL, pop from stack and compare

        ListNode* temp = head;
        stack<int> st;

        while(temp != NULL){

            st.push(temp->val);
            temp = temp->next;
        }

        temp = head;

        while(temp != NULL){

            

            if(st.top() != temp->val){
                return false;
            }
            st.pop();
            temp = temp->next;
        }

        return true;
    }
};

