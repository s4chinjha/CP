#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};
class Solution {
public:
    ListNode *detectCyclebrute(ListNode *head) {
        //store the nodes, traverse and find the one first 
        //occuring twice

        unordered_set<ListNode*> Nodes;

        //iterate
        while(head!=nullptr){
            //check for node in the map
            if(Nodes.find(head) != Nodes.end()){
                //if found return the node
                return head;
            }
            //save the current node 
            Nodes.insert(head);
            //move forward
            head = head->next;
        }

        //If loop is not found then return -1;
        return NULL;
    }

    //optimized
    //Tortoise and hare method
    ListNode *detectCycle(ListNode *head){

        //two pointers
        ListNode *slow = head;
        ListNode *fast = head;

        //iterate

        while(fast == NULL or fast->next ==NULL){
            
            slow = slow->next;
            fast = fast->next->next;
            //loop to check if there is a loop
            if(slow == fast){
                //loop exists
                slow = head;
                //a while loop to move both at 1 time
                while(slow != fast){
                slow = slow->next;
                fast = fast->next;               
                }

                return slow;
            }
        }

    }
};

// Driver code
int main() {
    // Creating nodes
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);

    // Creating a cycle (tail connects to node index 1)
    head->next->next->next->next = head->next;

    Solution obj;
    ListNode* startNode = obj.detectCycle(head);

    if (startNode)
        cout << "Cycle starts at node with value: " << startNode->val << endl;
    else
        cout << "No cycle found." << endl;

    return 0;
}
