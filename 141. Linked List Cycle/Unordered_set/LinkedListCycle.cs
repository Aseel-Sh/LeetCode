/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public bool HasCycle(ListNode head) {
        if(head == null){
            return false;
        }

        HashSet<ListNode> visited = new HashSet<ListNode>();
        ListNode temp = head;

        while(temp != null){
            if(visited.Contains(temp)){
                return true;
            }

            visited.Add(temp);
            temp = temp.next;
        }

        return false;
    }
}