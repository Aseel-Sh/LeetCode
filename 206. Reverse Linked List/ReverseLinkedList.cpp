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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //setting previous ptr to null and current to head
        ListNode* prev = nullptr;
        ListNode* curr = head;

        //keep going till we reach the end
        while(curr != nullptr){
            //storing the next ptr in "next"
            ListNode* next = curr->next;
            //changing our next ptr to our previous node
            curr->next = prev;
            //making the prev our curr for next iteration
            prev = curr;
            //moving our curr to next for next iteration
            curr = next;

        }

        return prev;
    }
};