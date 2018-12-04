```javascript
package offer;

/**
 * @author Felix
 * @date 2018年11月6日下午8:53:56
 * @version 输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，
 *          并保证奇数和奇数，偶数和偶数之间的相对位置不变。
 */
public class ReOrderArray {
	//奇数&1等于1，偶数&1等于0
	public static void reOrderArray(int[] array) {
		if (array.length < 2)
			return;
		int count = 0, begin = 0;
		int[] newArray = new int[array.length];//辅助数组
		for (int i = 0; i < array.length; i++) {
			if ((array[i] & 1) == 1)//计算所有奇数的数量
				count++;
		}
		for (int i = 0; i < array.length; i++) {
			if ((array[i] & 1) == 1)
				newArray[begin++] = array[i];//0到count-1位置放奇数
			else
				newArray[count++] = array[i];//count及之后的位置放偶数
		}
		for (int i = 0; i < array.length; i++) {
			array[i] = newArray[i];//将数据放回原数组
		}
	}
	
	
	public static void main(String[] args){
		int[] a = {2,4,1,4,7,6,11,9,3,0};
		reOrderArray(a);
		for(int i=0; i<a.length; i++){
			System.out.print(a[i]+" ");
		}
	}
}

```
