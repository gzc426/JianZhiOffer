/*
  题目：数组中只出现一次的数字
  一个整型数组里除了两个数字之外，其他的数字都出现了偶数次。请写程序找出这两个只出现一次的数字。
*/
class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        if( data.size() < 2 ){
            return;
        }
        
        map<int,int> m;
        for(int i=0; i<data.size(); i++){
            m[data[i]]++;
        }
        
        vector<int> vec;
        for(map<int, int>::iterator it = m.begin(); it != m.end(); it++){
            if( (*it).second == 1 ){
                vec.push_back( (*it).first );
            }
        }
        
        *num1 = vec[0];
        *num2 = vec[1];
    }
};
