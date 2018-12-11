/*
  题目：
  输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。
*/
class Solution {
public:
     int  NumberOf1(int n) {
         unsigned int mask=1;         
         int cnt=0;
         
         while(mask){
             if( (mask & n) == mask ){         
                 cnt++;         
             }
             mask=mask<<1;
         }
         
         return cnt;
     }
};
