```java
/*
public class ListNode {
    int val;
    ListNode next = null;

    ListNode(int val) {
        this.val = val;
    }
}*/
public class Solution {
    public ListNode ReverseList(ListNode head) {
        if(null ==head){
            return null;
        }
        ListNode  next = null;
        ListNode pre = null;
        while(null != head){
            next = head.next;
            head.next = pre;
            pre = head;
            head = next;
        }
        return pre;

    }
}
```
