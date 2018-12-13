public class Solution {
    public boolean VerifySquenceOfBST(int [] sequence) {
        if (sequence.length == 0)
            return false;
        return VerifySquenceOfBST(sequence,0,sequence.length-1);
    }

    private boolean VerifySquenceOfBST(int[] sequence, int begin, int end) {
        if (begin == end)
            return true;
        int last = sequence[end];
        int leftStart = -1;
        int leftEnd = -1;
        int rightStart = -1;
        int rightEnd = -1;
        for (int i = begin; i < end; i++) {
            if (sequence[begin] < last)
                leftStart = begin;
            if (sequence[i] < last){
                leftEnd = i;
            }else {
                if (rightStart == -1){
                    rightStart = i;
                }
                rightEnd = i;
            }
        }
        if (rightStart < leftEnd && rightStart != -1)
            return false;
        return VerifySquenceOfBST(sequence,leftStart,leftEnd) && VerifySquenceOfBST(sequence,rightStart,rightEnd);
    }
}
