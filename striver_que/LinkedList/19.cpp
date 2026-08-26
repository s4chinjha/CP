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

//Brute Force 
//Time Complexity = O(l) + O(l-n)
//At worst = O(2l)
//Space Complexity = O(1);

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        //if the head is empty
        if(head==NULL){
            return NULL;
        }
        //cnt the length of the LL

        ListNode* temp = head;int l = 0;

        while(temp != NULL){

            l++;
            temp=temp->next;

        }

        //delete the node from the back of the LL

        //we need the node before the node to be deleted
        //to change the pointer poiniting to the next of the node to be deleted
        //l-n

        //edge case the node to be deletd is the first element
        if(l==n){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        temp=head;int cnt=0;
        ListNode* deleteNode;

        int res = l-n;

        while(temp!=NULL){
            res--;
            if(res ==0){
                break;
            }
            temp=temp->next;
        }

        deleteNode=temp->next;
        temp->next=temp->next->next;
        delete deleteNode; //free memory

        return head;

    }
};