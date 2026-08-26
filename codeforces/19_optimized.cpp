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

    //optimal
    class Solution {
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {

            
            //using fast and slow pointer

            //we need to move to only length - index of the node to be delted

            //move fast to nth index and then both slow and fast by 1
            ListNode *fast=head,*slow=head;

            int cnt=n;

            while(cnt>0){
                fast=fast->next;
                cnt--;
            }
            //one edge case when n=len of the list

            if(fast==NULL){
                ListNode* newHead=head->next;
                delete head;
                return newHead;
            }

            //now move both of them until fast reaches the last index

            while(fast->next != NULL){
                slow=slow->next;
                fast=fast->next;
            }

            //now slow has reached the index before the node to be deleted

            ListNode* deleteNode = slow->next;
            slow->next=slow->next->next;
            delete deleteNode;

            return head;
        }
    };