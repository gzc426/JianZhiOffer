/*
  题目：和为S的两个数
  输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S，如果有多对数字的和等于S，输出两个数的乘积最小的。
  
  做法：前后指针。
*/
class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        vector<int> rst;
        
        int left = 0;
        int right = array.size() - 1;
        while( left < right ){
            if(array[left] + array[right] == sum){
                rst.push_back(array[left]);
                rst.push_back(array[right]);
                break;
            }
            else if(array[left] + array[right] < sum){
                left++;
            }else{
                right--;
            }
        }
        
        return rst;
    }
};
