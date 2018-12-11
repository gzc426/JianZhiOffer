```java
import java.util.ArrayList;
import java.util.Stack;

public class Solution {
    public boolean IsPopOrder(int [] pushA,int [] popA) {
        Stack<Integer> stack = new Stack<>();
        int j = 0;
        // 遍历pushA
        for(int i = 0; i < pushA.length;i++){
            // 如果pushA[i]现在还没被弹出，就把它放到stack中
            if(pushA[i] != popA[j]){
                stack.push(pushA[i]);
            }else{
                //如果pushA[i]被弹出了，那么下一个被弹出的一定是push[i-1]或者push[i+1],否则 return false
                j++;
                if(!stack.isEmpty() && stack.peek() != popA[j]&& i>0 && stack.peek()!= pushA[i-1]){
                    return false;
                }
            }
            // 如果pushA被完全遍历了，那么stack里存的就是pushA中还没被弹出的元素，
            // 这里stack中元素出栈的顺序就是popA元素的顺序
            if(i == pushA.length-1){
                while(!stack.isEmpty()){
                    if(stack.pop()!= popA[j++]){
                        return false;
                    }
                }
            }
        }
      return true;
    }
}
```
