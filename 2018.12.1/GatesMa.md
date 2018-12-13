# c++
```cpp
/**
通过按位与操作符（&）巧妙运算实现

Example:  当num=15时，

1//num&(num-1)=(1111)&(1110)=(1110) 	  

2//num&(num-1)=(1110)&(1101)=(1100) 	 

3//num&(num-1)=(1100)&(1011)=(1000) 	 

4//num&(num-1)=(1000)&(0111)=0  ，循环停止。共执行4次while循环。

可以发现：每执行一次就去掉了最右边的1，so~循环执行几次就有几个1啦~

高效！有几个1就处理几次
*/
class Solution {
public:
     int  NumberOf1(int n) {
         int num=0;
         while(n) {
             n &= (n-1);
             num++;
         }
         return num;
     }
};
```
