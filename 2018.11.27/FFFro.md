public class Solution {
    public int Fibonacci(int n) {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        int a = 0;
        int b = 1;
        int res = 0;
        int i = 2;
        while (i<=n){
            res = a + b;
            a = b;
            b = res;
            i++;
        }
        return res;
    }
}
