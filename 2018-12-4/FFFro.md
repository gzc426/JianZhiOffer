public class Solution {

    public ListNode ReverseList(ListNode head) {
        if (head == null || head.next == null) {
            return head;
        }
        ListNode pre = head;
        ListNode pNode = head.next;
        ListNode next = head;
        pre.next = null;
        while (pNode != null){
            next = pNode.next;
            pNode.next = pre;
            pre = pNode;
            pNode = next;
        }
        return pre;
    }
}
