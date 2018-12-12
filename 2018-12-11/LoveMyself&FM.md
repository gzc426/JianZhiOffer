public class Solution {
    public boolean VerifySquenceOfBST(int [] sequence) {
        if(sequence.length==0){
            return false;
        }
       return judge(sequence,0,sequence.length-1);
    }
    public boolean judge(int [] a,int start,int last){
        if(start>=last){
            return true;
        }
        //后序遍历，最后的一个位置元素即是根节点
        int i = last;
        //找到的i即是分割左子树与右子树的位置。i-1的位置到start为左子树，i到last-1位置为右子树
        //因为二叉树的左子树的所有元素小于根节点的值，右子树的所有元素的值大于根节点的值
        while(i>start && a[i-1]>a[last]){
            --i;
        }
        //左子树的元素都需要小于根节点
        for(int j=i-1;j>=start;--j){
            if(a[j]>a[last]){
                return false;
            }
        }
        //在递归判断左子树与右子树是否满足后序遍历
        return (judge(a,start,i-1)) && (judge(a,i,last-1));
    }
}
