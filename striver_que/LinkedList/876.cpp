#include <bits/stdc++.h>
using namespace std;

// struct ListNode {
// int val;
// ListNode *next;
// ListNode() : val(0), next(nullptr) {}
// ListNode(int x) : val(x), next(nullptr) {}
// ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

//using Tortoise and Hare Algo
ListNode* middleNode(ListNode* head) {
    ListNode* slow  = head;
    ListNode* fast  = head;

    //for odd fast = last
    //for even fast = null

    while(fast != NULL or fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    //when while loop condn fullfills
    //slow points to the middle ones

    return slow;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


}