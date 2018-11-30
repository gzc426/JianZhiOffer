# C++
```cpp
class Solution {
public:
    int rectCover(int number) {
        if(number < 1) return 0;
        else if(number == 1) return 1;
        else if(number == 2) return 2;
        else return rectCover(number - 1) + rectCover(number - 2);
    }
};
```
