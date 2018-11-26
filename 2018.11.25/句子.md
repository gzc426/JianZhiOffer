package practice;

import java.util.Stack;

public class for5 {
    Stack<Integer> stack1 = new Stack<Integer>();
    Stack<Integer> stack2 = new Stack<Integer>();
    
    public void push(int node) {
    	stack1.push(new Integer(node));
    }
    
    public int pop() {  
    	int result;
    	while(!stack1.isEmpty())
    	{
    		stack2.push(stack1.pop());
    	}
    	result = stack2.pop();
    	while(!stack2.isEmpty())
    	{
    		stack1.push(stack2.pop());
    	} 
    	return result;             
    }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
	}

}
