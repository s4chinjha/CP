/*
LEETCODE 141 Linked List Cycle
Date: 28/03/26
Time: 7:54 PM - 8:13 PM
Owner: Sachin Kumar Jha
*/
class Solution{
public:
    bool hasCycle(ListNode *head) {
        //iterate the LL
        //store the node
        //If the node is repated then true
        //if we complete the iteration then return false

        ListNode *temp = head;
        //hashmap to keep track of the node visited
        unordered_map<ListNode*,int> nodeVisited;
        while(temp != nullptr){
            //to check for loop
            //search for the Node temp is pointing,if found, return true;
            if(nodeVisited.find(temp) != nodeVisited.end()){
                return true;
            }
            //mark the current node as visited
            nodeVisited[temp] = 1;
            //move the temp to next
            temp = temp->next;
        }
        //if there is no loop found after iterating the LL
        return false;
    }

    //optimized
    //9:30 PM - 9:38 PM

    bool hasCycle(ListNode *head) {
        //slow and fast
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                return true;
            }
        }
        return false;
    }
};