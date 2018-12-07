```javascript
package offer;
/**
 * @author Felix
 * @date 2018年11月8日下午9:23:57
   @version 输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）
 */
public class HasSubtree {
	public boolean hasSubtree(TreeNode root1, TreeNode root2) {
		boolean res = false;
		if(root1 != null && root2 != null){//当Tree1和Tree2都不为零的时候，才进行比较。否则直接返回false
			if(root1.val == root2.val){//如果找到了对应Tree2的根节点的点
				res = doesTree1HaveTree2(root1,root2);//以这个根节点为为起点判断是否包含Tree2
			}
			if(!res){//如果找不到，那么就再去root的左儿子当作起点，去判断是否包含Tree2
				res = hasSubtree(root1.left, root2);
			}
			if (!res) {// 如果还找不到，那么就再去root的右儿子当作起点，去判断是否包含Tree2
				res = hasSubtree(root1.right, root2);
			}
		}
		return res;
	}
	public static boolean doesTree1HaveTree2(TreeNode root1,TreeNode root2){
		//如果Tree2已经遍历完了都能对应的上，返回true
		if(root2 == null)
			return true;
		//如果Tree2还没有遍历完，Tree1却遍历完了。返回false
		if(root1 == null)
			return false;
		//如果其中有一个点没有对应上，返回false
		if(root1.val != root2.val)
			return false;
		//如果根节点对应的上，那么就分别去子节点里面匹配
		return doesTree1HaveTree2(root1.left,root2.left) && doesTree1HaveTree2(root1.right,root2.right) ;
	}
}

```
