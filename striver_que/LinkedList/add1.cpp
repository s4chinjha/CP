int helper(Node* t){

    //base condition
    if(t==NULL){
        return 1;
    }

    //recursive call

    int carry=helper(t->next);

    t->data+=carry;

    if(t->data < 10){
        return 0;
    }

    t->data=0;
    return 1;
}

Node *addOne(Node *head)
{

    Node* temp=head;
    int carry = helper(temp);

    if(carry==1){
        Node* newHead=new Node(1);
        newHead->next=head;
        return newHead;
    }

    return head;
}