import java.util.ArrayList;
public class Solution {
    public TreeNode Convert(TreeNode pRootOfTree) {
        if (pRootOfTree == null || pRootOfTree.left == null & pRootOfTree.right == null) {
            return pRootOfTree;
        }
        ArrayList<TreeNode> list = new ArrayList<>();
        build(pRootOfTree, list);
        for (int i = 0; i < list.size(); i++) {
            if (i == 0) {
                list.get(0).right = list.get(1);
            } else if (i == list.size() - 1) {
                list.get(i).left = list.get(i - 1);
            } else {
                list.get(i).left = list.get(i - 1);
                list.get(i).right = list.get(i + 1);
            }
        }
        return list.get(0);
    }

    public void build(TreeNode root, ArrayList<TreeNode> list) {
        if (root == null) {
            return;
        }
        if (root.left != null) {
            build(root.left, list);
        }
        list.add(root);
        if (root.right != null) {
            build(root.right, list);
        }

    }
}
