#include <bits/stdc++.h>
using namespace std;

//optimized
class Solution {
public:

    ListNode* reverseAfterMid(ListNode* head){
        
        if(head == NULL || head->next == NULL){
            return head;
        }

        //recursive approach 
        ListNode* newHead = reverseAfterMid(head->next);

        ListNode* front = head->next;

        front->next = head;

        head->next = NULL;

        return newHead;
    }

    bool isPalindrome(ListNode* head) {
        //two pointers
        ListNode* fast = head;
        ListNode* slow = head;

        //if one or no element then it is a pallindrome
        if(head == NULL || head->next == NULL)return true;
        
        //find mid;

        while(fast->next != NULL && fast->next->next != NULL){

            slow=slow->next;
            fast=fast->next->next;
        }

        //reverse the ll after the mid

        //get new head reverse  the LL

        ListNode* newHead = reverseAfterMid(slow->next);

        ListNode* first = head;
        ListNode* second = newHead;

        //compare reverse with from start

        while(second !=NULL){


            if(first->val != second->val){
                //after reversing the LL
                reverseAfterMid(newHead);
                return false;
            }
            //mv first and second

            first = first->next;
            second = second->next;
        }

        return true;
    }
};

