class Solution {
public:
    ListNode *getIntersectionNode(ListNode *firstHead, ListNode *secondHead) {
    //two pointers

    ListNode* t1=firstHead;
    ListNode* t2=secondHead;

    //check cnodition t1!=t2 

    while(t1!=t2){

        //due to this we are not able to check for the first node
        //so condn in while

        t1=t1->next;
        t2=t2->next;

        if(t1==t2){
            return t1;
        }

        //t1 or t2=null

        if(t1==NULL){
            t1=secondHead;
        }

        if(t2==NULL){
            t2=firstHead;
        }
    }

    return t1;
    }
};
