/*
  题目：把字符串转换成整数
  将一个字符串转换成一个整数(实现Integer.valueOf(string)的功能，但是string不符合数字要求时返回0)，要求不能使用字符串转换整数的库函数。
  数值为0或者字符串不是一个合法的数值则返回0。
*/
class Solution {
public:
    int StrToInt(string str) {
        int len = str.size();
        if(len == 0){
            return 0;
        }
        
        int idx = 0;
        while(str[idx] == ' '){
            idx++;
        }
        
        bool pn = true;
        if(str[idx] == '+'){
            idx++;
        }else if(str[idx] == '-'){
            pn = false;
            idx++;
        }
        
        int rst = 0;
        while(str[idx] != '\0'){
            if('0'<=str[idx] && str[idx]<='9'){
                rst = rst*10 + (str[idx] - '0');
            }else{
                return 0;
            }
            idx++;
        }
        
        return pn==true ? rst : (-1)*rst;
    }
};
