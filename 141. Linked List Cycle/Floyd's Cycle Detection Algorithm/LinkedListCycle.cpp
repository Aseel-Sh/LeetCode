/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        //check if its empty list
        if(head == nullptr || head->next == nullptr){
            return false;
        }

        //set slow to head and fast to node after head
        ListNode* slow = head;
        ListNode* fast = head->next;

        //keep going as long as they arent the same 
        while(fast != slow){
            //if at the end of list then return false cuz not a cycle
            //need both checks since fast skips 2 ptrs at a time. and we dont want seg fault
            if(fast->next == nullptr || fast->next->next == nullptr){
                return false;
            }
            //update for next iteration
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};