public class Solution {
    public int minNumberInRotateArray(int [] array) {
        if(array.length == 0){
            return 0;
        }
        if (array.length == 1){
            return array[0];
        }
        int start = 0;
        int end = array.length-1;
        while (start <= end){
            int mid = start + (end-start)/2;
            if (array[mid]>array[start]){
                start = mid ;
            }else if (array[mid]<array[end]){
                end = mid;
            }else{
                start++;
            }
        }
        return array[end];
    }
}
