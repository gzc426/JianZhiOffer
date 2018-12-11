public class Solution {
    public ListNode Merge(ListNode list1,ListNode list2) {
        if (list1 == null)
            return list2;
        if (list2 == null)
            return list1;
        ListNode list = new ListNode(-1);
        ListNode res = list;
        while (list1 != null && list2 != null){
            if(list1.val < list2.val){
                list.next = list1;
                list1 = list1.next;
                list = list.next;
            }else {
                list.next = list2;
                list2 = list2.next;
                list = list.next;
            }
        }
        if (list1 == null)
            list.next = list2;
        if (list2 == null)
            list.next = list1;

        return res.next;
    }
}
