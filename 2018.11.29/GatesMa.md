# C++11
```cpp
class Solution {
public:
    int jumpFloorII(int number) {
        if(number == 1){
            return 1;
        }else if(number == 2){
            return 2;
        }else{
            return 2 * jumpFloorII(number - 1);
        }
    }
};
```
