/*
  题目：和为S的连续正数序列
  小明很喜欢数学,有一天他在做数学作业时,要求计算出9~16的和,他马上就写出了正确答案是100。
  但是他并不满足于此,他在想究竟有多少种连续的正数序列的和为100(至少包括两个数)。没多久,他就得到另一组连续正数和为100的序列:18,19,20,21,22。
  现在把问题交给你,你能不能也很快的找出所有和为S的连续正数序列? Good Luck!

  做法：前后指针。
*/
class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int>> rst;
        
        int rear = 1, front = 2;
        while(rear < front){
            int cur_sum = (front + rear) * (front - rear + 1) / 2;//当前区间内，数字的和
            if(cur_sum == sum){
                vector<int> vec;
                for(int i=rear; i<=front; i++){
                    vec.push_back(i);
                }
                rst.push_back(vec);
                rear++;
            }
            if(cur_sum < sum){//当前区间还不够大
                front++;
            }
            if(cur_sum > sum){//从rear开始的区间，不行
                rear++;
            }
        }
        
        return rst;
    }
};
