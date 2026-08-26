#include <bits/stdc++.h>
using namespace std;

//Brute force
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        //temp node
        ListNode* temp = head;

        //head check 
        if(head == NULL || head->next == NULL){
            return head;
        }

        //store odd index values in the list
        std::vector<int> v;

        while(temp != NULL && temp->next != NULL){
            v.push_back(temp->val);

            temp = temp->next->next;
        }
        //bcz of the temp->next != NULL 
        //last value may not be added

        if(temp){
            v.push_back(temp->val);
        }

        //same for even index values

        temp = head->next;

        while(temp != NULL && temp->next != NULL){
            v.push_back(temp->val);

            temp = temp->next->next;
        }

        if(temp){
            v.push_back(temp->val);
        }

        //now iterate over the list and change in LL

        temp = head;int i = 0;

        while(temp != NULL){
            temp->val = v[i];
            i++;
            temp = temp->next;
        }

        return head;

    }
};