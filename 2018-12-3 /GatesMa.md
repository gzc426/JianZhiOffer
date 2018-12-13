# c++
```cpp
class Solution {
public:
    double Power(double base, int exponent) {
        if(exponent == 0) return  1;
        if(exponent == 1) return base;
        bool isN = false;
        if(exponent < 0) {
            isN = true;
            exponent = -exponent;
        }
        double result = Power(base*base, exponent/2);
        if(exponent % 2 == 1) {
            result *= base;
        }
        return isN ? 1 / result : result;
    }
};
```
