/*
  题目：左选择字符串
  汇编语言中有一种移位指令叫做循环左移（ROL），现在有个简单的任务，就是用字符串模拟这个指令的运算结果。
  对于一个给定的字符序列S，请你把其循环左移K位后的序列输出。例如，字符序列S=”abcXYZdef”,要求输出循环左移3位后的结果，即“XYZdefabc”。
  是不是很简单？OK，搞定它！
  
  做法：截取左右两截字符串，前后互换，再连接。
*/
class Solution {
public:
    string LeftRotateString(string str, int n) {
        int len = str.size();
        if( len <= 1 ){//空串或只有一个字符的串
            return str;
        }
        
        string rst = "";
        int zy = n % len;//真正左移的位数
        
        string l = str.substr(0, zy);
        string r = str.substr(zy,len);
        rst = r + l;
        
        return rst;
    }
};
