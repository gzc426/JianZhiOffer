# c++
```cpp
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        vector<int> res;
        int len = array.size();
        for(int i = 0;i < len;i++) {
            if(array[i] % 2 == 1) {
                res.push_back(array[i]);
            }
        }
        for(int i = 0;i < len;i++) {
            if(array[i] % 2 == 0) {
                res.push_back(array[i]);
            }
        }
        array.clear();
        array = res;
    }
};
```
