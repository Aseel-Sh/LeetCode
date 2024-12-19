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
    bool hasCycle(ListNode *head) {
        if (head == nullptr){
            return false;
        }


        unordered_set<ListNode*> visited;
        ListNode* temp = head;


        while (temp != nullptr){
            if(visited.find(temp) != visited.end()){
                return true;
            }


            visited.insert(temp);
            temp = temp->next;
        }
        return false;
    }
};
