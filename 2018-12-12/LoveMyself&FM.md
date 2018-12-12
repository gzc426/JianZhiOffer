```java
import java.util.ArrayList;
/**
public class TreeNode {
    int val = 0;
    TreeNode left = null;
    TreeNode right = null;
    public TreeNode(int val) {
        this.val = val;
    }
}
*/

public class Solution {
    ArrayList<ArrayList<Integer>> pathList = new ArrayList<ArrayList<Integer>>();
    ArrayList<Integer> path = new ArrayList<Integer>();
    public ArrayList<ArrayList<Integer>> FindPath(TreeNode root,int target) {
          if(root == null)
              return  pathList; 
          path.add(root.val);
          if(root.left == null && root.right == null && target == root.val)
          {
                pathList.add(new ArrayList<Integer>(path));
          }
          if(root.val <= target && root.left != null){
              FindPath(root.left,target-root.val); 
          }  
          if(root.val <= target && root.right != null)
          {
              FindPath(root.right,target-root.val); 
          }   
          path.remove(path.size()-1);//回退到父节点
          return pathList;
    }
}
```
