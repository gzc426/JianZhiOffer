```javascript
/**
 * @author Felix
 * @date 2018年11月3日下午9:05:03
   @version 一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。
 */
/*数一下一层1种跳法，两层2种跳法，三层3种跳法，四层5种跳法....可以观察到，从第3个数开始，每个数的值都等于前两个个数之和。
 * 故该问题是指为斐波那契数列求和，递推公式为 f(n)=f(n-1)+f(n-2);
 * 可以考虑，小青蛙每一步跳跃只有两种选择：一是再跳一级阶梯到达第 i 级阶梯，此时小青蛙处于第 i-1 级阶梯；
	或者再跳两级阶梯到达第 i 级阶梯，此时小青蛙处于第 i-2 级阶梯。
	小青蛙跳n层的有f(n)种跳法，跳到n-1层时是分f(n-1)种跳法，跳到n-2层时是f(n-2)种跳法，所以f(n)=f(n-1)+f(n-2)
 */
public class JumpFloor {
	//循环
	public static int jumpFloor(int target){
		if(target < 2)
			return target;
		int res=0, f1=1, f2=1;
		for(int i=1; i<target; i++){
			res = f1+f2;
			f1 = f2;
			f2 = res;
		}
		return res;
	}
	//递归
	public static int jumpFloor2(int target){
		if(target < 0)
			return 0;
		int[] jump = {0,1,2};//1表示一层台阶一种跳法，2表示两种跳法
		if(target < 3)
			return jump[target];
		return jumpFloor(target-1)+jumpFloor(target-2);
	}
	public static void main(String[] args){
		System.out.println(jumpFloor(9));
		System.out.println(jumpFloor2(9));
	}
}

```
