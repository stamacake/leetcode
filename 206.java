/*
Reverse a singly linked list.

Example:

Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL
*/
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        if(head==null) return null;
        if(head.next==null) return head;
        ListNode tmp = new ListNode();
        tmp.val = head.val;
        tmp.next= null;
        head = head.next;
        while(head.next!=null){
            ListNode tmp2 = tmp;
            tmp = new ListNode();
            tmp.next = tmp2;
            
            tmp.val = head.val;
            head = head.next;
        }
        
        ListNode tmp2 = tmp;
        tmp = new ListNode();
        tmp.next = tmp2;
            
        tmp.val = head.val;
        return tmp;
    }
}
