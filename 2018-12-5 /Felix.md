```javascript
package offer;
/**
 * @author jie
 * @date 2018年11月8日下午9:03:32
   @version 输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。
 */
public class Merge {
	//我的做法
	public ListNode merge(ListNode list1, ListNode list2) {
		if(list1 == null || list2 == null)
			return list1 == null ? list2 : list1;
		ListNode dummy = new ListNode(0);
		ListNode cur = dummy;
		while(list1 != null && list2 != null){
			if(list1.val < list2.val){
				cur.next = list1;
				list1 = list1.next;
			}else{
				cur.next = list2;
				list2 = list2.next;
			}
			cur = cur.next;
		}
		/*if(list1 != null){
			cur.next = list1;
			list1 = list1.next;
			cur = cur.next;
		}
		if(list2 != null){
			cur.next = list2;
			list2 = list2.next;
			cur = cur.next;
		}*/
		//上面注释的内容由下面一步搞定
		cur.next = (list1 == null) ? list2 : list1;//当前指针指向剩下的不为空的链表
		return dummy.next;
		
	}
	
	//递归版本
	public ListNode merge2(ListNode list1, ListNode list2) {
		if (list1 == null) {
			return list2;
		}
		if (list2 == null) {
			return list1;
		}
		if (list1.val <= list2.val) {
			list1.next = merge2(list1.next, list2);
			return list1;
		} else {
			list2.next = merge2(list1, list2.next);
			return list2;
		}
	}
}

```
