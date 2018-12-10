```java
import java.util.ArrayList;
public class Solution {
	public static ArrayList<Integer> printMatrix(int[][] matrix) {
		ArrayList<Integer> list = new ArrayList<>();
		int row = matrix.length - 1;
		int col = matrix[0].length - 1;
		int count = matrix.length*matrix[0].length;
		int rowFlag = 0;
		int colFlag = 0;
		while (row >= 0 && col >= 0) {
			boolean flag = false;
			// 从左到右
			for (int m = rowFlag; m <= col; m++) {
                	if(list.size()>=count) {
					break;
				}
				list.add(matrix[rowFlag][m]);
				flag=true;
			}
			// 从上到下
			for (int m = rowFlag + 1; m <= row&&flag; m++) {
				if(list.size()>=count) {
					break;
				}
				list.add(matrix[m][col]);
				
			}
			// 从右到左
			for (int m = col - 1; m >= colFlag&&flag; m--) {
				if(list.size()>=count) {
					break;
				}
				list.add(matrix[row][m]);
				
			}
			// 从下到上
			for (int m = row - 1; m > rowFlag&&flag; m--) {
				if(list.size()>=count) {
					break;
				}
				list.add(matrix[m][rowFlag]);
				
			}
			rowFlag++;
			colFlag++;
			col--;
			row--;
		}
		return list;
	}
}
```
