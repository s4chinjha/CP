class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // i have the reversed numbers in LL

        //create a dummy node this is the strt of ans LL

        ListNode* dummyNode= new ListNode();

        ListNode* temp=dummyNode;

        //mv until there is l1,l2,carry

        int carry=0;

        while(l1!=NULL || l2!=NULL || carry==1){


            int sum=0;

            //if there is a value in l1 add in sum

            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }

            //if there is a value in l2 add in sum

            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }


            //add carry too

            sum+=carry;

            carry = sum/10;

            ListNode* newNode=new ListNode(sum%10);

            temp->next=newNode;

            temp=temp->next;
        }

        return dummyNode->next;
    }
};