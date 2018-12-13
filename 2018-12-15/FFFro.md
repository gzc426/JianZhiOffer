import java.util.HashMap;

public class Solution {
    public int MoreThanHalfNum_Solution(int [] array) {
        if (array.length == 0)
            return 0;
        if (array.length == 1)
            return array[0];
        HashMap<Integer,Integer> map = new HashMap<>();
        for (int i = 0; i < array.length ; i++) {
            if (map.containsKey(array[i])){
                map.put(array[i],map.get(array[i])+1);
                if (map.get(array[i]) > array.length/2)
                    return array[i];
            }else {
                map.put(array[i],1);
            }
        }
        return 0;
    }
}
