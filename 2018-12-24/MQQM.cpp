/*
  题目：数字在排序数组中出现的次数
  统计一个数字在排序数组中出现的次数。
*/
class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        int cnt = 0;
        
        for(int i : data){
            if(i == k){
                cnt++;
            }            
        }
        
        return cnt;
    }
};
