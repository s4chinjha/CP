Node* sortList(Node *head){
    //edge case 

    if(!head || !head->next){
        return head;
    }

    //dummy nodes

    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);

    //pointer

    Node* zero=zeroHead;
    Node* one=oneHead;
    Node* two=twoHead;

    Node* temp=head;

    while(temp!=NULL){

        //3 conditions

        if(temp->data == 0){
            zero->next=temp;
            zero=zero->next;
        }

        else if(temp->data==1){
            one->next=temp;
            one=one->next;
        }

        else{
            two->next=temp;
            two=two->next;
        }

        temp=temp->next;
    }

    //connect the links

    zero->next = oneHead->next ? oneHead->next : twoHead->next;


    one->next=twoHead->next;

    two->next=NULL;

    Node* newHead=zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return newHead;
}