```java
import java.util.Stack;

public class Solution {

	Stack<Integer> dataStack = new Stack<>();
	Stack<Integer> minStack = new Stack<>();

	public void push(int node) {
		dataStack.push(node);
		if(minStack.isEmpty()) {
			minStack.push(node);
		}else {
			if(!minStack.isEmpty()) {
				if(node < minStack.peek()) {
					minStack.push(node);
				}else {
					minStack.push(minStack.peek());
				}
			}
		}
	}

	public void pop() {
		if(dataStack.isEmpty()) {
			throw new NullPointerException("stack is empty");
		}
		dataStack.pop();
		minStack.pop();
	}

	public int top() {
		if(dataStack.isEmpty()) {
			throw new NullPointerException("stack is empty");
		}
		return dataStack.peek();
	}

	public int min() {
		if(minStack.isEmpty()) {
			throw new NullPointerException("stack is empty");
		}
		return minStack.peek();
	}
}
```
