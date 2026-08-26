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
using vi = vector<int>;

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        //store the value in a vector
        //sort
        //change values and return head

        vi v;

        ListNode* temp=head;

        while(temp!=NULL){
            v.push_back(temp->val);

            temp=temp->next;
        }

        sort(v.begin(),v.end());

        temp=head;

        while(temp!=NULL){
            for(int i:v){
            temp->val = v[i];
            temp=temp->next;
            }      
        }
        
        return head;
    }
};