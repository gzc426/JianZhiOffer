```java
import java.util.ArrayList;
public class Solution {
    public ArrayList<Integer> printListFromTailToHead(ListNode listNode) {
        ArrayList<Integer> list = new ArrayList<>();
        if(listNode==null){
            return list;
        }
        while(listNode!=null){
             list.add(listNode.val);
             listNode = listNode.next;
           
        }
        for(int i = 0;i < list.size()/2;i++){
            int temp = list.get(i);
            list.set(i,list.get(list.size()-i-1));
            list.set(list.size()-1-i,temp);
        }
        return list;
      
    }
}
```
本日题目参考了剑指offer书本上的解法，但没有使用栈而是利用Java语言的特点，翻转了结果arraylist。
