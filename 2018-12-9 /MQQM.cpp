/*
  题目：
  定义栈的数据结构，请在该类型中实现一个能够得到栈中所含最小元素的min函数（时间复杂度应为O（1））。
  
  做法：同时维护两个栈，stk和stk_min。stk_min的栈顶元素是stk中元素的最小元素。
*/
class Solution {
public:
    void push(int value) {
        stk.push(value);
        if(stk_min.empty()){
            stk_min.push(value);
        }
        else{
            if(stk_min.top()<value){
                stk_min.push(stk_min.top());
            }
            else{
                stk_min.push(value);
            }
        }
    }
    void pop() {
        stk.pop();
        stk_min.pop();
    }
    int top() {
        return stk.top();
    }
    int min() {
        return stk_min.top();
    }
private:
    stack<int> stk;
    stack<int> stk_min;
};
