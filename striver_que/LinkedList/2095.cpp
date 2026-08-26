#include <bits/stdc++.h>
using namespace std;

//04/04/26

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
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        //two pointers 
        ListNode *fast=head->next,*slow=head;

        //edge case if the slow.next.next is null

        if(slow->next == NULL){
            return NULL;
        }

        if(slow->next->next == NULL){
            ListNode* deleteMiddleNode = slow->next;
            head->next=NULL;
            return head;
        }

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next; //mv by 1
            fast=fast->next->next; //mv by 2
        }

        //the next of the slow is to be deleted

        ListNode* deleteMiddleNode=slow->next;

        slow->next=slow->next->next;

        delete deleteMiddleNode;

        return head;        
    }
};