/*
  题目：
  输入两个链表，找出它们的第一个公共结点。
  
  做法：
  用两个指针扫描"两个链表"。指针1 遍历链表1后，遍历链表2；指针2 遍历链表2后，遍历链表1。两个指针最后会在第一个公共结点相遇。  
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
    ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
        ListNode *p1 = pHead1;
        ListNode *p2 = pHead2;
        while(p1!=p2){
            p1 = (p1==NULL ? pHead2 : p1->next);
            p2 = (p2==NULL ? pHead1 : p2->next);
        }
        return p1;    
    }
};
