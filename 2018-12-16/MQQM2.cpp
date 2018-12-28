/*
  题目：
  输入n个整数，找出其中最小的K个数。例如输入4,5,1,6,2,7,3,8这8个数字，则最小的4个数字是1,2,3,4,。
  
  做法：
  用堆排序。这里是通过构建大顶堆，将未排序的几个数字按升序排列，然后取前k个。
  还可以构建小顶堆，用不着进行对所有元素的降序排列，只要进行k次堆调整(每次产生一个最小元素)，就能产生k个最小的元素。
  
  参考：
  https://www.nowcoder.com/profile/1540197/codeBookDetail?submissionId=14874912
*/
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {        
        vector<int> result;
        if( input.size() < k ){
            return result;
        }
                
        heapSort(input, input.size());      
        for(int i=0;i<k;i++){     
            result.push_back(input[i]);      
        }
        
        return result;
    }
     
    void adjustHeap(vector<int>&input,int i,int length){//堆调整         
        int child=i*2+1;
        if(child<length){      
           if(child+1<length&&input[child+1]>input[child]){
                child=child+1;
           }
           if(input[child]>input[i]){
                int temp=input[i];
                input[i]=input[child];
                input[child]=temp;
                adjustHeap(input,child,length);
           }
        }
    }
    void heapSort(vector<int>&input,int length){//堆排序
        for(int i=length/2-1;i>=0;i--){//初始化堆             
            adjustHeap(input,i,length);
        }         
        for(int i=length-1;i>0;i--){
            int temp=input[i];
            input[i]=input[0];
            input[0]=temp;
            adjustHeap(input,0,i);             
        }         
    }     
};
