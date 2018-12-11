/*
  题目:
  输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，
  并保证奇数和奇数，偶数和偶数之间的相对位置不变。
*/
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int len=array.size();
        if(len <= 1) return;
        
        queue<int> q1,q2;
        for(int i=0;i<len;i++){
            array[i]%2  ? q1.push(array[i]) : q2.push(array[i]);
        }
        
        array.clear();
        while(!q1.empty()){
            array.push_back(q1.front());
            q1.pop();
        }
        while(!q2.empty()){
            array.push_back(q2.front());
            q2.pop();
        }
    }
};
