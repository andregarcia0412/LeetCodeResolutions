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
        return reverseLinkedList(head);
    }

    public ListNode reverseLinkedList(ListNode head) {
        ListNode prev = null;
        ListNode actual = head;
        
        while(actual != null) {
            ListNode next = actual.next;
            actual.next = prev;
            prev = actual;
            actual = next;
        }

        head = prev;
        return head;
    }
}
