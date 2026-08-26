class Solution {
public:
    void deleteNode(ListNode* node) {
        // no head given
        //only the node is given

        ListNode* curr=node;

        ListNode* next=curr->next;

        while(next!=NULL){

            curr->val=next->val;

            curr=curr->next;
            next=next->next;
        }

        curr=node;next=node->next;

        while(next->next!=NULL){
            curr=curr->next;
            next=next->next;
        }


        curr->next = nullptr;
    }
};