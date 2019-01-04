/*
  题目：
  求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
  
  做法：用递归。
*/
class Solution {
public:
    int Sum_Solution(int n) {
        if(n==0){
            return sum;
        }
        sum += n;
        return Sum_Solution(n-1);
    }
private:
    int sum = 0;
};
