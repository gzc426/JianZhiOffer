/*
  题目：
  输入一个链表，反转链表后，输出新链表的表头。
*/

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
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead==NULL || pHead->next==NULL){
            return pHead;
        }
        
        ListNode* p=NULL;
        while(pHead != NULL){
            ListNode* tmp=pHead->next;
            pHead->next=p;
            
            p=pHead;
            pHead=tmp;
        }
        
        return p;
    }
};
