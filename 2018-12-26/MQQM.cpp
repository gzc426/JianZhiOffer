/*
  题目：平衡二叉树
  输入一棵二叉树，判断该二叉树是否是平衡二叉树。
*/
class Solution {
public:
    int calDepth(TreeNode* root){//求树的深度
        if(root == NULL){
            return 0;
        }
        
        int ld = calDepth(root->left);
        int rd = calDepth(root->right);
        return ld > rd ? ld+1 : rd+1;
    }
    bool IsBalanced_Solution(TreeNode* pRoot) {
        if(pRoot == NULL){
            return true;
        }
        
        int l_depth = calDepth(pRoot->left);
        int r_depth = calDepth(pRoot->right);
        if( abs(l_depth - r_depth) > 1 ){
            return false;
        }
            
        return IsBalanced_Solution(pRoot->left) && IsBalanced_Solution(pRoot->right);
    }
};
