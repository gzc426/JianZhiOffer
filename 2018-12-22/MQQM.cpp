/*
  题目：数组中的逆序对
  在数组中的两个数字，如果前面一个数字大于后面的数字，则这两个数字组成一个逆序对。
  输入一个数组,求出这个数组中的逆序对的总数P。并将P对1000000007取模的结果输出。 即输出P%1000000007
  
  参考：
  https://www.nowcoder.com/profile/4620097/codeBookDetail?submissionId=35997120
  https://www.nowcoder.com/questionTerminal/96bd6684e04a44eb80e6a68efc0ec6c5
*/
class Solution {
public:
    int InversePairs(vector<int> data) {
        int length=data.size();
        if(length<=1){
            return 0;
        }
        
        vector<int> copy;
        for(int i=0;i<length;i++){
            copy.push_back(data[i]);
        }
        long long count=InversePairsCore(data,copy,0,length-1);
        
        return count%1000000007;
    }
    long long InversePairsCore(vector<int> &data,vector<int> &copy,int start,int end){
       if(start==end){
           copy[start]=data[start];
           return 0;
       }
       int length=(end-start)/2;
       long long left=InversePairsCore(copy,data,start,start+length);
       long long right=InversePairsCore(copy,data,start+length+1,end); 
        
       int i=start+length;
       int j=end;
       int indexcopy=end;
       long long count=0;
       while(i>=start&&j>=start+length+1){
           if(data[i]>data[j]){
               copy[indexcopy--]=data[i--];
               count += j-(start+length); 
           }else{
               copy[indexcopy--]=data[j--];
           } 
       }
       for(;i>=start;i--)
           copy[indexcopy--]=data[i];
       for(;j>=start+length+1;j--)
           copy[indexcopy--]=data[j];  
        
       return left+right+count;
    }
};
