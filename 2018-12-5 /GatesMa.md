# c++
```cpp
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode* L=NULL;  
        if(pHead1==NULL)  
            return pHead2;  
        if(pHead2 ==NULL)  
            return pHead1 ;  

        if(pHead1->val <pHead2->val)  
        {  
            L = pHead1;  
            L->next =Merge(pHead1->next ,pHead2);  
        }  
        else  
        {  
            L=  pHead2;  
            L->next =Merge(pHead1,pHead2->next);  
        }  
        return L; 
    }
};
```
